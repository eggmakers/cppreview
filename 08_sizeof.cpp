#include "iostream"
using namespace std;

int main()
{
    short a = 32768;
    cout << "shortռ�õ��ڴ�ռ�Ϊ" << sizeof(a) << endl;

    int b = 32768;
    cout << "intռ�õ��ڴ�ռ�Ϊ" << sizeof(b) << endl;

    long c = 32768;
    cout << "longռ�õ��ڴ�ռ�Ϊ" << sizeof(c) << endl;

    long long d = 32768;
    cout << "long longռ�õ��ڴ�ռ�Ϊ" << sizeof(d) << endl;

    return 0;
}
