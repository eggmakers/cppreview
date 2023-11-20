#include "iostream"
#include "string"
#include <random>
using namespace std;

// 代码区

// 全局区
int g_a = 0;
int g_b = 0;

const int c_g_a = 10;
const int c_g_b = 10;
int main1()
{
    int l_a = 0;
    int l_b = 0;
    cout << &l_a << endl;
    cout << &l_b << endl;

    cout << &g_a << endl;
    cout << &g_b << endl;

    static int s_a = 10;
    static int s_b = 10;
    cout << &s_a << endl;
    cout << &s_b << endl;

    cout << &("Hello World") << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << &c_l_a << endl;
    cout << &c_l_b << endl;
    cout << &c_g_a << endl;
    cout << &c_g_b << endl;
    return 0;
}

// 栈区
// int *func()
// {
//     int a = 10;
//     return &a;//局部变量地址在栈区，使用后会被自动释放，不可返回局部变量的地址
// }

// int main()
// {
//     int *p = func();
//     cout << *p << endl;
// }

// 堆区
int *func()
{
    int *a = new int(10); // 使用new将代码放到堆区
    return a;
}

int main2()
{
    int *p = func();
    cout << *p << endl;
    delete p;
    // cout << *p << endl;
    return 0;
}

// new
int *func1()
{
    int *p = new int(10);
    return p;
}

void test01()
{
    int *p = func1();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
}

void test02()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] += 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
}

int main()
{
    // test01();
    test02();
    return 0;
}