//
// Created by Adkhambek on 05/10/21.
//

#include <iostream>
#include <random>
#include <thread>

class SolutionRecursion {
private:
    bool **matrix;

    int x;
    int y;

public:
    SolutionRecursion(int x, int y) : x{x}, y{y} {
        matrix = new bool *[x];
        for (int i = 0; i < x; ++i)
            matrix[i] = new bool[y];
    }

    ~SolutionRecursion() {
        for (int i = 0; i < x; ++i)
            delete matrix[i];
        delete matrix;
    }

    bool gen() {
        return 0 + (rand() % (1 - 0 + 1)) == 1;
    };

    void fillRandom() {
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                matrix[i][j] = gen();
            }
        }
    }

    void calculate(int xIndex, int yIndex) {
        if (xIndex >= x || xIndex < 0 || yIndex >= y || yIndex < 0 || matrix[xIndex][yIndex]) return;
        matrix[xIndex][yIndex] = true;

        calculate(xIndex + 1, yIndex);
        calculate(xIndex - 1, yIndex);
        calculate(xIndex, yIndex + 1);
        calculate(xIndex, yIndex - 1);

        print();

        using namespace std::chrono;
        std::this_thread::sleep_for(200ms);
    }

    void print() {
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
    }
};

