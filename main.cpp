// input
// output
// stream
#include <iostream>

using namespace std;

/*

 */
int main() {
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

    return 0x0;
}