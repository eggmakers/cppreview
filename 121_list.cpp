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

// list赋值和交换
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

    list<int> l2;
    l2 = l1;
    printlist(l2);

    list<int> l3;
    l3.assign(l2.begin(), l2.end());
    printlist(l3);

    list<int> l4;
    l4.assign(10, 100);
    printlist(l4);
} // 赋值

void test02()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printlist(l1);

    list<int> l2;
    l2.assign(10, 100);
    printlist(l2);

    l1.swap(l2);
    printlist(l1);
    printlist(l2);
} // 交换
int main()
{
    // test01();
    test02();
    return 0;
}
