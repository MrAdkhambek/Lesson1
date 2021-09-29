#include <iostream>
#include <assert.h>
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

int summa(int num) {
    const int step = num / 2;
    int s = 1;

    for (int i = 2; i <= step; ++i) {
        if (!(num % i)) {
            s += i;
        }
    }
    return s;
}

bool isPerfect(int num) {
    return summa(num) == num;
}

// k > 0
void kPerfect(int k) {
    int i = 0;      // perfect
    int step = 6;   // qadam

    while (i != k) {
        if (isPerfect(step)) {
            i++;
            println(summa(step));
        }
        step++;
    }
}

int main() {

    kPerfect(1);

    return EXIT_SUCCESS;                 // finish main method;
}