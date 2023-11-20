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

// lis数据存取
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

    cout << l1.front() << endl;
    cout << l1.back() << endl;

    list<int>::iterator it = l1.begin();
    // it += 1; // 不支持随机访问
    it++;
    it--; // 支持双向
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
