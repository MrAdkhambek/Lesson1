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