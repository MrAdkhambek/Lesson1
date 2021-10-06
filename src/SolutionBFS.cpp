//
// Created by Adkhambek on 05/10/21.
//

#include <iostream>
#include <random>
#include <thread>
#include <queue>

struct Point {
    int x;
    int y;
};

class SolutionBFS {
private:
    bool **matrix;

    int x;
    int y;

public:
    SolutionBFS(int x, int y) : x{x}, y{y} {
        matrix = new bool *[x];
        for (int i = 0; i < x; ++i)
            matrix[i] = new bool[y];
    }

    ~SolutionBFS() {
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

        std::queue<Point> queue;
        queue.push(Point{xIndex, yIndex});

        while (!queue.empty()) {
            Point current = queue.front();
            queue.pop();
            if (matrix[current.x][current.y]) continue;

            matrix[current.x][current.y] = true;
            expandToNeighbours(queue, current);

            print();
            using namespace std::chrono;
            std::this_thread::sleep_for(200ms);
        }
    }

    void expandToNeighbours(std::queue<Point> &queue, Point current) {
        if (isPossibleNeighbour(current.x + 1, current.y)) queue.push(Point{current.x + 1, current.y});
        if (isPossibleNeighbour(current.x - 1, current.y)) queue.push(Point{current.x - 1, current.y});
        if (isPossibleNeighbour(current.x, current.y + 1)) queue.push(Point{current.x, current.y + 1});
        if (isPossibleNeighbour(current.x, current.y - 1)) queue.push(Point{current.x, current.y - 1});

        if (isPossibleNeighbour(current.x + 1, current.y + 1)) queue.push(Point{current.x + 1, current.y + 1});
        if (isPossibleNeighbour(current.x - 1, current.y - 1)) queue.push(Point{current.x - 1, current.y - 1});
        if (isPossibleNeighbour(current.x - 1, current.y + 1)) queue.push(Point{current.x - 1, current.y + 1});
        if (isPossibleNeighbour(current.x + 1, current.y - 1)) queue.push(Point{current.x + 1, current.y - 1});
    }

    bool isPossibleNeighbour(int xIndex, int yIndex) {
        return xIndex < x && xIndex >= 0 && yIndex < y && yIndex >= 0 && !matrix[xIndex][yIndex];
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

