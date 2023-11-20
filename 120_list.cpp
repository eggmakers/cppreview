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

// list构造函数
void printlist(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    printlist(l1);

    list<int> l2(l2.begin(), l1.end());
    printlist(l2);

    list<int> l3(l2);
    printlist(l3);

    list<int> l4(10, 1100);
    printlist(l4);
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
