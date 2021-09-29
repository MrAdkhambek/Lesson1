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