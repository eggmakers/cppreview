#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string赋值操作

void test01()
{
    string str1;
    str1 = "Hello World";
    cout << "str1=" << str1 << endl;

    string str2 = str1;
    cout << "str2=" << str2 << endl;

    string str3 = "a";
    cout << "str3=" << str3 << endl;

    string str4;
    str4.assign("Hello C++");
    cout << str4 << endl;

    string str5;
    str5.assign("Hello C++", 5);
    cout << str5 << endl;

    string str6;
    str6.assign(str5);
    cout << str6 << endl;

    string str7;
    str7.assign(10, 'w');
    cout << str7 << endl;
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
