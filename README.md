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