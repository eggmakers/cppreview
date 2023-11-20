#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// set大小和交换

void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test01() // 大小
{
    set<int> s1;

    s1.insert(10); // 插入数据
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1); // 按照从小到大排序，且不可以有重复的值

    if (s1.empty())
    {
        cout << "s1 is empty" << endl;
    }
    else
    {
        cout << "s1 is not empty" << endl;
        cout << "The size of s1 is " << s1.size() << endl;
    }
}

void test02() // 交换
{

    set<int> s1;
    s1.insert(10); // 插入数据
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int> s2;
    s2.insert(100); // 插入数据
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);

    printSet(s1);
    printSet(s2);

    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}
int main()
{
    // test01();
    test02();
    return 0;
}
