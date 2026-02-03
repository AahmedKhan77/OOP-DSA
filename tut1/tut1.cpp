#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << (a > b) << endl;
    cout << (a == b) << endl;

    cout << (a > 0 && b > 0) << endl;
    cout << (a > 0 || b < 0) << endl;
    cout << !a << endl;

    a++;
    b--;

    cout << (a & b) << endl;
    cout << (a | b) << endl;

    cout << (a > b ? a : b) << endl;

    cout << sizeof(a) << endl;

    return 0;
}
