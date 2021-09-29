#include <iostream>
#include <bitset>
#include <any>
#include <cmath>
#include <ctype.h>
#include <cstdlib>


#define abs(x) ((x < 0) ? (-1 * x) : x)

#define MAX(x, y) (x > y) ? (x) : (y)
#define MIX(x, y) (x > y) ? (y) : (x)

#define sizeOfArr(x) sizeof(x) / sizeof(x[0])

#define forever for (;;)

#define printArr(arr) {                                 \
        int size = sizeOfArr(arr);                      \
        for (int i = 0; i < size; ++i) print(arr[i]);   \
        }


#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

float blablabla(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {

    println(blablabla(2, 2, 3));

    return EXIT_SUCCESS;                 // finish main method;
}