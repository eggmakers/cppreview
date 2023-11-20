#include "iostream"
using namespace std;

int main()
{
    char a = 'a';
    char b = 'A';
    cout << a << endl;
    cout << (int)a << endl;
    cout << (int)b << endl;
    cout << "char占用内存空间为" << sizeof(a) << endl;

    // char a = "a";
    // char a = 'abcdef';

    return 0;
}