#include "iostream"
using namespace std;

int main()
{
    float a = 3e2;
    double b = 3e-2;

    cout << a << endl;
    cout << b << endl;

    cout << "floatռ���ڴ�ռ�Ϊ" << sizeof(a) << endl;
    cout << "doubleռ���ڴ�ռ�Ϊ" << sizeof(b) << endl;

    return 0;
}