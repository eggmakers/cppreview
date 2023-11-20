#include "iostream"
#include "string"
#include <random>
using namespace std;

// 基本语法
int main1()
{
    int a = 10;
    int &b = a;
    b = 20;
    cout << a << endl;
    return 0;
}

// 引用必须初始化，且初始化后就不可以改变
int main2()
{
    int a = 10;
    int c = 120;
    // int &b;// 引用必须初始化
    int &b = a;
    // &b = c; // 且初始化后就不可以改变
    b = 20;
    cout << a << endl;
    return 0;
}

// 引用做函数参数
void Swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "swap a = " << a << endl;
    cout << "swap b = " << b << endl;
}

void Swap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main3()
{
    int a = 10;
    int b = 120;
    // Swap01(a, b);
    // Swap02(&a, &b);
    Swap03(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

// 引用做函数返回值
// int &test01()
// {
//     int a = 10;
//     return a; // 不要返回局部变量的引用
// }

int &test02()
{
    static int a = 10;
    return a; // 函数的调用可以作为左值
}

int main4()
{
    // int &ref = test01();
    int &ref = test02();
    cout << ref << endl;
    test02() = 1000;
    cout << ref << endl;

    return 0;
}

// 引用的本质:指针常量
void func(int &ref)
{
    ref = 100;
}
int main5()
{
    int a = 10;
    int &ref = a;
    ref = 20;
    cout << a << endl;
    cout << ref << endl;

    func(a);
    return 0;
}

// 常量引用
void showValue(const int &v)
{
    // v = 1000;
    cout << v << endl;
}

int main()
{
    const int &ref = 10;
    // ref = 20;//加入const变成只读

    int a = 10;
    showValue(a);

    return 0;
}