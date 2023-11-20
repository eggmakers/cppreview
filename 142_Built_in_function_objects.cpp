#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
using namespace std;

// 算术仿函数（内建函数对象）

void test01()
{
    negate<int> n;
    cout << n(50) << endl;
}

void test02()
{
    plus<int> p;
    cout << p(100, 100) << endl;
}

void test03()
{
}
int main()
{
    test01();
    test02();
    // test03();
    return 0;
}
