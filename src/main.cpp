#include <iostream>
#include <array>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define sizeOfArr(x) sizeof(x) / sizeof(x[0])

bool isEquals(char left, char right) {
    return std::tolower(left) == std::tolower(right);
}

bool isPalindrome(std::string value) {
    const unsigned long length = value.length();
    const unsigned long half = length / 2;

    for (int i = 0; i < half; ++i) {
        if (!isEquals(value[i], value[length - i - 1])) return false;
    }

    return true;
}

int getSingleNumber(int arr[], int size) {
    int result = 0;

    for (int i = 0; i < size; ++i) {
        result ^= arr[i];
    }

    return result;
}

int main() {

    int arr[] = {2, 3, 4, 8, 4, 2, 3};
    int size = sizeOfArr(arr);
    println(getSingleNumber(arr, size));

    return EXIT_SUCCESS;                 // finish main method;
}