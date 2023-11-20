#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string字符存取

void test01()
{
    string str = "Hello";

    cout << str << endl;

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl; // 通过[]访问单个字符
    }
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << endl; // 通过at访问单个字符
    }

    str[0] = 'x';
    cout << str << endl; // 通过[]修改单个字符
    str.at(0) = 'q';
    cout << str << endl; // 通过[]修改单个字符
}

void test02()
{
}
int main()
{
    test01();
    // test02();
    return 0;
}
