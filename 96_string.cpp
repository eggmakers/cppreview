#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string的构造函数

void test01()
{
    string s1; // 默认构造
    const char *str = "Hello World";

    string s2(str);

    cout << "s2:" << s2 << endl;

    string s3(s2);
    cout << "s3:" << s3 << endl;

    string s4(10, 'a');
    cout << "s4:" << s4 << endl;
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
