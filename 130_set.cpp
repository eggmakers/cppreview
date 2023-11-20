#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// set和multiset的区别

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

    pair<set<int>::iterator, bool> ret = s1.insert(10);
    if (ret.second)
        cout << "insert success" << endl;
    else
        cout << "insert error" << endl;
    ret = s1.insert(10);
    if (ret.second)
        cout << "insert success" << endl;
    else
        cout << "insert error" << endl;

    multiset<int> s2;
    s2.insert(10);
    s2.insert(10);
    for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
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
