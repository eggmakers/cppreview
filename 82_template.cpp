#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// 普通函数与函数模版的调用规则

void myprint(int a, int b)
{
    cout << "noraml func called" << endl;
}

template <class T>
void myprint(T a, T b)
{
    cout << "template func called" << endl;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    char d = 'c';
    char e = 'c';

    myprint(a, b);
    myprint(c, d); // 强制模版调用
}

int main()
{
    test01();
    return 0;
}