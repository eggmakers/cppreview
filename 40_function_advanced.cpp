#include "iostream"
#include "string"
#include <random>
using namespace std;

// 函数默认参数
int func(int a, int b, int c = 10)
{
    return a + b + c;
}

// int func2(int a, int b = 10, int c) //往后都要有默认值
// {
//     return a + b + c;
// }

// 函数声明有默认参数，实现就不能有默认
int func2(int a = 10, int b = 10);
int func2(int a, int b)
{
    return a + b;
}

int main1()
{
    cout << func(10, 20) << endl;
    cout << func2() << endl;
    return 0;
}

// 函数占位参数和函数重载
void func(int)
{
    cout << "this is a func" << endl;
}

int main2()
{
    func(10);
    return 0;
}

// 函数重载的注意事项
void func1(int &a)
{
    cout << "func1(int &a)的调用" << endl;
}

void func1(const int &a)
{
    cout << "func1(const int &a)的调用" << endl;
}

int main()
{
    int a = 0;
    func1(a);
    func1(10);
    return 0;
}