#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// template <template T>

void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapFloat(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;

    swapInt(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    float c = 10;
    float d = 20;

    swapFloat(c, d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
}

// 函数模版
template <typename T> // 声明一个模板，告诉代码中后面的T不要报错，是一个通用的数据类型
void myswap1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test02()
{
    int a = 10;
    int b = 20;

    // 1.自动推导类型
    myswap1(a, b);

    // 2.显示指定类型
    myswap1<int>(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

int main1()
{
    test02();
    return 0;
}

// 模版的注意事项
template <class T> // typename可以换成class
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test03()
{
    // char a = 'a';
    // int b = 20;

    int a = 10;
    int b = 20;

    myswap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

template <class T> // typename可以换成class
void func()
{
    cout << "func called" << endl;
}
int main()
{
    func<int>();
    test03();
    return 0;
}