#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string子串

void test01()
{
    string str = "Hello";

    string subStr = str.substr(1, 2); // 求子串
    cout << subStr << endl;

    string email = "1402461065@qq.com";
    int pos = email.find("@");
    subStr = email.substr(0, pos);
    cout << subStr << endl;
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
