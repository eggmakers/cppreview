#include "iostream"
#include "string"
#include <random>
using namespace std;

// 定义和使用
int main1()
{
    // 定义指针
    int a = 10;

    int *p;
    // 让指针记录变量的地址
    p = &a;
    cout << &a << endl;
    cout << p << endl;
    // 使用指针
    // 可以通过解引用的方式来找到指针指向的内存
    *p = 1000;
    cout << a << endl;
    cout << *p << endl;

    return 0;
}

// 指针所占用的内存空间
int main2()
{
    int a = 10;
    int *p = &a;

    // 在32位下为4个字节
    // 在64位下为8个字节
    cout << sizeof(p) << endl;
    cout << sizeof(double *) << endl;

    return 0;
}

// 空指针和野指针
int main3()
{
    int *p = NULL;

    *p = 100;

    cout << p << endl;
    // cout << *p << endl;空指针无法访问

    return 0;
}

int main4()
{
    int *p = (int *)0x1100;

    cout << p << endl; // 野指针不可以使用

    return 0;
}

// const修饰指针
int main5()
{
    // const修饰指针
    int a = 10;
    int b = 10;

    const int *p1 = &a;
    // *p1 = 20;错误
    p1 = &b;
    // const修饰常量
    int *const p2 = &a;
    *p2 = 100;
    // p2 = &b;错误
    // const即修饰指针又修饰常量
    const int *const p3 = &a;
    // *p3 = 100;错误
    // p3 = &b;错误

    return 0;
}

// 指针和数组
int main6()
{
    double arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << arr[0] << endl;
    double *p = arr;
    cout << *p << endl;

    // 第二个元素
    p++;
    cout << *p << endl;

    // 指针遍历数组
    for (int i = 0; i < 10; i++)
    {
        cout << *p << endl;
        p++;
    }

    return 0;
}

// 指针和函数
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << b << endl;
}

void swap02(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    // cout << *p1 << *p2 << endl;
}
int main()
{
    // 值传递
    int a = 10;
    int b = 20;
    swap01(a, b);
    // 地址传递
    swap02(&a, &b);
    cout << a << b << endl;
    return 0;
}

// 指针，数组，函数
