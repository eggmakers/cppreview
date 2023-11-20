#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string查找和替换

void test01()
{
    string str1 = "asdegfdea";
    int pos = str1.find("de"); // 查找
    cout << pos << endl;

    int pos1 = str1.rfind("de");
    cout << pos1 << endl;

    str1.replace(1, 3, "111111"); // 替换
    cout << str1 << endl;
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
