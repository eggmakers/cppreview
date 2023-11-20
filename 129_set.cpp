#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// set查找和统计

void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test01() // 查找
{
    set<int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1); // 按照从小到大排序，且不可以有重复的值
    set<int>::iterator pos = s1.find(300);
    if (pos != s1.end())
    {
        cout << "find it" << endl;
    }
    else
    {
        cout << "not find" << endl;
    }
}

void test02() // 统计
{
    set<int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1);

    int num = s1.count(30);
    cout << num << endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}
