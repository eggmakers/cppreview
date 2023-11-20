#include "iostream"
#include "string"
using namespace std;

int main()
{
    int a = 13;
    int b = 10;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;

    // ! && ||
    cout << !a << endl;
    cout << !!a << endl;

    cout << (!a && b) << endl;
    cout << (a && b) << endl;

    cout << (!a || b) << endl;
    cout << (!a || !b) << endl;

    return 0;
}