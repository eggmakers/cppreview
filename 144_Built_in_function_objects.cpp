#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
using namespace std;

// 逻辑仿函数（内建函数对象）

void test01()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    vector<bool> v2;
    v2.resize(v.size());

    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

    for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test02()
{
}

void test03()
{
}
int main()
{
    test01();
    // test02();
    // test03();
    return 0;
}
