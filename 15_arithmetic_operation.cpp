#include "iostream"
#include "string"
using namespace std;

int main()
{
    int a = 13;
    int b = 10;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << float(a) / float(b) << endl;
    cout << a % b << endl;

    a = b++;
    cout << a << " " << b << endl;
    a = ++b;
    cout << a << " " << b << endl;

    a += 2;
    cout << a << endl;
    a -= 2;
    cout << a << endl;
    a *= 2;
    cout << a << endl;
    a /= 2;
    cout << a << endl;
    a %= 2;
    cout << a << endl;

    return 0;
}