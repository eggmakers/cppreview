#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// string插入和删除

void test01()
{
    string str = "Hello";

    str.insert(1, "111"); // 插入
    cout << str << endl;

    str.erase(1, 3);
    cout << str << endl; // 删除
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
