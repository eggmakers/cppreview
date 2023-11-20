#include "iostream"
using namespace std;

int main()
{
    short a = 32768;
    cout << "short占用的内存空间为" << sizeof(a) << endl;

    int b = 32768;
    cout << "int占用的内存空间为" << sizeof(b) << endl;

    long c = 32768;
    cout << "long占用的内存空间为" << sizeof(c) << endl;

    long long d = 32768;
    cout << "long long占用的内存空间为" << sizeof(d) << endl;

    return 0;
}
