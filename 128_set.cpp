#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// set插入和删除

void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test01()
{
    set<int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1); // 按照从小到大排序，且不可以有重复的值

    s1.erase(s1.begin());
    printSet(s1);

    s1.erase(30);
    printSet(s1);

    s1.erase(s1.begin(), s1.end());
    s1.clear();
    printSet(s1);
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
