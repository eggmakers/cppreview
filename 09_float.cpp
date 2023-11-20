#include "iostream"
using namespace std;

int main()
{
    float a = 3e2;
    double b = 3e-2;

    cout << a << endl;
    cout << b << endl;

    cout << "float占用内存空间为" << sizeof(a) << endl;
    cout << "double占用内存空间为" << sizeof(b) << endl;

    return 0;
}