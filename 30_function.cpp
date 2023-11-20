#include "iostream"
#include "string"
#include <random>
using namespace std;

// 函数的声明
int max(int a, int b);

int add(int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}

// 值传递
void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// 常见样式
void test01()
{
    cout << "this is test01" << endl;
}

void test02(int a)
{
    cout << "this is test02 and a = " << a << endl;
}

int test03()
{
    cout << "this is test03" << endl;
    return 0;
}

int test04(int a)
{
    cout << "this is test04" << endl;
    return a;
}

int main()
{
    test01();

    test02(1);

    int a = test03();
    cout << a << endl;

    int b = test04(10);
    cout << b << endl;

    int c = 10;
    int d = 20;
    cout << max(c, d) << endl;
    return 0;
}

// 函数的声明
int max(int a, int b)
{
    return a > b ? a : b;
}