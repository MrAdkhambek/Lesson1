#include <iostream>
#include <array>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define sizeOfArr(x) sizeof(x) / sizeof(x[0])

void printArr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        print(arr[i]);
        print(" ");
    }
    println("");
}

int findIndexMin(int arr[], int start, int last) {
    int min = arr[start];
    int minIndex = start;

    for (int i = start + 1; i < last; ++i) {
        if (min > arr[i]) {
            min = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = findIndexMin(arr, i, size);
        std::swap(arr[i], arr[minIndex]);
        printArr(arr, size);
    }
}

int main() {
    int arr[] = {2, 3, 4, 8, 8, 55, 55, 7, 7, 66, 4, 2, 3};
    int size = sizeOfArr(arr);

    printArr(arr, size);
    sort(arr, size);


    return EXIT_SUCCESS;                 // finish main method;
}