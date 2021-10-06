#include <iostream>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define sizeOfArr(arr) (sizeof (arr) / sizeof(arr[0]))

void print2dArray(int arr[3][3], int x, int y) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            print(arr[i][j]);
            print(" ");
        }
        println("");
    }
}

void printArray(int arr[], int size) {
    for (int j = 0; j < size; ++j) {
        print(arr[j]);
        print(" ");
    }
}

int sizeNumber(long num) {
    int k = 0;
    while (num) {
        num /= 10;
        k++;
    }
    return k;
}

bool isHappyTicket(long num) {
    const int size = sizeNumber(num);
    int index = size / 2;

    long left = 0;
    long right = 0;

    while (num) {
        long lastNumber = num % 10;
        num /= 10;

        if (index-- > 0) {
            right += lastNumber;
        } else {
            left += lastNumber;
        }
    }

    return left == right;
}


bool isHappyTicket(std::string num) {
    const int size = num.length();
    int index = size / 2;

    long left = 0;
    long right = 0;

    for (auto item: num) {
        int firstNumber = item - '0';
        if (index-- > 0) {
            left += firstNumber;
        } else {
            right += firstNumber;
        }
    }

    return left == right;
}

// 2, 2, 3, 3, 5, 5, 1

int getSingleNumber(int arr[], int size) {
    int result = 0;

    for (int i = 0; i < size; ++i) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int arr[] = {2, 5, 2, 5, 1, 1, 4};
    println(getSingleNumber(arr, sizeOfArr(arr)));

    return EXIT_SUCCESS;                 // finish main method;
}