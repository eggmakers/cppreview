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

// list大小操作
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

    while (!l1.empty())
    {
        cout << "the size of l1:" << l1.size() << endl;
        l1.pop_back();
    }
    l1.resize(10);
    printlist(l1);
    l1.resize(5);
    printlist(l1);
    l1.resize(10, 1);
    printlist(l1);
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
