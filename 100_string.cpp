#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string字符串比较

void test01()
{
    string str1 = "我";
    string str2 = "你";

    if (str1.compare(str2) == 0)
    {
        cout << "str1=str2" << endl;
    }
    else if (str1.compare(str2) > 0)
    {
        cout << "str1>str2" << endl;
    }
    else if (str1.compare(str2) < 0)
    {
        cout << "str1<str2" << endl;
    }
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
