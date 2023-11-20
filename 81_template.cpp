#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// 普通函数与函数模版的区别

int maAdd01(int a, int b)
{
    return a + b;
}

template <class T>
T maAdd02(T a, T b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    cout << maAdd01(a, c) << endl;

    cout << maAdd02(a, b) << endl;

    cout << maAdd02<int>(a, c) << endl;
}

int main()
{
    test01();
    return 0;
}