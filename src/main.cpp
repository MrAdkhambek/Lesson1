#include <iostream>
#include <cmath>
#include <array>

#include <vector>
#include <list>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define sizeOfArr(x) (sizeof(x) / sizeof(x[0]))

#define printArr(arr) {                                 \
        int size = sizeOfArr(arr);                      \
        for (int i = 0; i < size; ++i) {                \
            print(arr[i]);                              \
            print(" ");                                 \
        }}


std::pair<int, int> calculate(std::string value) {
    int k = 0;
    int K = 0;

    for (auto item: value) {
        if (std::isalpha(item) && std::islower(item)) {
            k++;
        }
        if (std::isalpha(item) && std::isupper(item)) {
            K++;
        }
    }

    return std::pair<int, int>(k, K);
}

int main() {



    return EXIT_SUCCESS;                 // finish main method;
}