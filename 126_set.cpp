#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// set构造和赋值

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

    s1.insert(10); // 插入数据
    s1.insert(30);
    s1.insert(200);
    s1.insert(30);
    s1.insert(40);
    printSet(s1); // 按照从小到大排序，且不可以有重复的值

    set<int> s2(s1);
    printSet(s2);

    set<int> s3;
    s3 = s2;
    printSet(s3);
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
