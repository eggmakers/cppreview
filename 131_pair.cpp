#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// pair对组创建

void test01() // 查找
{
    pair<string, int> p(string("Tom"), 10);
    cout << "name:" << p.first << " age:" << p.second << endl;

    pair<string, int> p2 = make_pair("Jerry", 10);
    cout << "name:" << p2.first << " age:" << p2.second << endl;
}

void test02() // 统计
{
}
int main()
{
    test01();
    // test02();
    return 0;
}
