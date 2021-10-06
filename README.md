# Lesson4

```c++
    int hour;
    int minute;
    int second;

    char flag;

    // input data 12:20:20
    cout << "Hour : ";
    cin >> hour >> flag >> minute >> flag >> second;

    // input data 12 20
    int a;
    int b;

    cin >> a >> b;
    cout << "\ta = " << a << endl;
    cout << "\tb = "  << b << endl;
```

# Lesson5

```c++
    // Binary Literals
    int x = 10;
    int y = 0xA;
    int i = 0b1010;
    int z = 012;
```

```c++
    Digits separators
    int x = 100'000'000;
```

```c++
int main() {

    // first second value
    long N;
    cin >> N;

    // calculate hour(s)
    int hour = N / 3600;
    N = N % 3600;

    // calculate minute(s)
    int minute = N / 60;
    N = N % 60;

    // calculate second(s)
    int second = N;

    cout << hour << ":" << minute << ":" << second;
    return 0x0;
}
```

```c++
    double num1 = 3.12345678;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;
```

#Lesson7

```c++
#include <iostream>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

// Global
int k;

int main() {

    // Local
    int i;

    {
        // Inner
        int j;
        println(k);
        println(i);
        println(j);
    }

    println(k);
    println(i);
    println(j);
    
    println("Hello unicorn");
    print(5);

    return 0x0;
}
```

```c++

#include <iostream>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

int main() {

    bool isEven = false;

    if (isEven) {
        println("Juft");
    } else {
        println("Toq");
    }

    return 0x0;
}
```


```c++
    std::string a = "anagram";
    std::string b = "nagamar";

    int k = 0;

    for (int i = 0; i < a.length(); ++i) {
        k ^= a[i];
        k ^= b[i];
    }

    println(k);
```

#Lesson8

```c++
#include <iostream>
#include <bitset>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define MAX(x,y) (x > y) ? (x) : (y)
#define MIX(x,y) (x > y) ? (y) : (x)


int main() {
    println(MAX(4,5));
    return EXIT_SUCCESS;                 // finish main method;
}
```

#Lesson9
```c++
int main() {

    int n;
    std::cin >> n;

    const float step = 0.0001;
    float temp = 0;

    // error
    float e = n;

    while (e >= step) {
        temp += step;
        e = n - (temp * temp);
    }

    print("Ildizi ");
    println(temp);

    return EXIT_SUCCESS;                 // finish main method;
}
```

#Lesson11 

```c++
#include <iostream>
#include <bitset>
#include <any>
#include <stdlib.h>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define MAX(x, y) (x > y) ? (x) : (y)
#define MIX(x, y) (x > y) ? (y) : (x)

#define sizeOfArr(x) sizeof(x) / sizeof(x[0])

#define forever for (;;)

#define printArr(arr) {                                 \
        int size = sizeOfArr(arr);                      \
        for (int i = 0; i < size; ++i) print(arr[i]);   \
        }

bool sendSmsService1(std::string name) {
    println(name);
    return true;
}
bool sendSmsService2(std::string name) {
    println(name);
    return true;
}

int main() {

    if (sendSmsService1("Avval") || sendSmsService2("Keyin")) {
        
    }

    if (sendSmsService1("Avval") && sendSmsService2("Keyin")) {
        
    }

    return EXIT_SUCCESS;                 // finish main method;
}
```

#Lesson13

```c++
float blablabla(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    println(blablabla(2, 2, 3));
    return EXIT_SUCCESS;                 // finish main method;
}
```

```c++
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
```



#Lesson14

```c++
// num > 0
// 2, 3
bool isPrime(int num) {
    if (num == 2 || num == 3) return true;

    for (int j = 2; j <= sqrt(num); ++j) {
        if (!(num % j)) {
            return false;
        }
    }
    return true;
}

void printPrimes(int n) {
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            println(i);
        }
    }
}

int main() {
    printPrimes(100);
    return EXIT_SUCCESS;                 // finish main method;
}
```

```c++

void reverse(int n) {
    int k;
    std::cin >> k;
    if (n > 1) reverse(n - 1);
    println(k);
}

int main() {
    int n;
    print("N = ");
    std::cin >> n;
    reverse(n);
    return EXIT_SUCCESS;                 // finish main method;
}
```

#Lesson16
```c++
#include <iostream>
#include <cmath>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define sizeOfArr(x) (sizeof(x) / sizeof(x[0]))

#define printArr(arr) {                                 \
        int size = sizeOfArr(arr);                      \
        for (int i = 0; i < size; ++i) {                \
            print(arr[i]);                              \
            print(" ");                                 \
        }}


void merge(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3) {
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;

    while (index1 < size1 && index2 < size2) {
        if (arr1[index1] > arr2[index2]) {
            arr3[index3++] = arr2[index2++];
        } else {
            arr3[index3++] = arr1[index1++];
        }
    }

    for (; index1 < size1;) {
        arr3[index3++] = arr1[index1++];
    }
    for (; index2 < size2;) {
        arr3[index3++] = arr2[index2++];
    }
}

int main() {
    int arr1[] = {1, 2, 4, 5, 7};
    int arr2[] = {5, 6, 9};

    int size1 = sizeOfArr(arr1);
    int size2 = sizeOfArr(arr2);
    int size3 = size1 + size2;

    int arr3[size3];

    merge(arr1, arr2, arr3, size1, size2, size3);

    printArr(arr3)

    return EXIT_SUCCESS;                 // finish main method;
}
```

```c++
#include <iostream>
#include <cmath>

#define print(x) std::cout << (x)
#define println(x) std::cout << (x) << std::endl

#define sizeOfArr(x) (sizeof(x) / sizeof(x[0]))

#define printArr(arr) {                                 \
        int size = sizeOfArr(arr);                      \
        for (int i = 0; i < size; ++i) {                \
            print(arr[i]);                              \
            print(" ");                                 \
        }}


// 73 31 96 24 46
//  0  1  2  3  4

int findMaxIndex(int arr[], int start, int size) {
    int result = arr[start];
    int resultIndex = start;

    for (int i = start + 1; i < size; ++i) {
        if (result < arr[i]) {
            result = arr[i];
            resultIndex = i;
        }
    }

    return resultIndex;
}

int maxProfit(int arr[], int size) {
    int day = 0;
    int maxProfitResult = 0;

    while (day < size) {
        int maxIndex = findMaxIndex(arr, day, size);
        maxProfitResult += (maxIndex + 1 - day) * arr[maxIndex];
        day = maxIndex + 1;
    }

    return maxProfitResult;
}

int main() {
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeOfArr(arr);

    println(maxProfit(arr, size));
    return EXIT_SUCCESS;                 // finish main method;
}
```

```c++
#include <iostream>
#include <cmath>
#include <array>

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
            k ++;
        }
        if (std::isalpha(item) && std::isupper(item)) {
            K ++;
        }
    }

    return std::pair<int, int>(k, K);
}

int main() {

    auto result = calculate("Adam Peter");

    print("Kichik = "); println(result.first);
    print("Katta = "); println(result.second);
    
    
    std::pair<int, int> pairs[10];
    

    return EXIT_SUCCESS;                 // finish main method;
}
```


#Lesson17

```c++
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
```