#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string字符串拼接

void test01()
{
    string str1 = "I ";

    str1 += "love play game"; // 追加一个字符串
    cout << str1 << endl;

    str1 += ':'; // 追加一个字符
    cout << str1 << endl;

    string str2 = "LOLDNF";
    str1 += str2;
    cout << str1 << endl;

    string str3 = "I ";
    str3.append("love "); // 追加字符串
    cout << str3 << endl;

    str3.append("game abcde", 4);
    cout << str3 << endl;

    str3.append(str2, 3, 6);
    cout << str3 << endl;
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
