#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
#include <stack>
#include <queue>
#include <list>
using namespace std;

// lis反转和排序
void printlist(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

bool myCompare(int v1, int v2)
{
    return v1 > v2;
}

void test01()
{
    list<int> l1;
    l1.push_back(1011);
    l1.push_back(120);
    l1.push_back(340);
    l1.push_back(140);
    printlist(l1);

    l1.reverse();
    printlist(l1); // 反转

    // sort(l1.begin(), l1.end()); // 不支持随机访问迭代器的容器，不可以使用标准算法
    l1.sort();
    printlist(l1); // 排序

    l1.sort(myCompare);
    printlist(l1); // 排序
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
