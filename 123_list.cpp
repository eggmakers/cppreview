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

// lis插入和删除
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
    l1.push_back(40); // 尾插

    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    l1.push_front(400); // 头插
    printlist(l1);

    l1.pop_back();  // 尾删
    l1.pop_front(); // 头删
    printlist(l1);

    list<int>::iterator it = l1.begin();
    l1.insert(++it, 1000);
    printlist(l1); // 插入

    it = l1.begin();
    l1.erase(++it);
    printlist(l1);

    l1.push_back(10);
    l1.push_back(10);
    l1.push_back(10);
    l1.remove(10);
    printlist(l1);

    l1.clear();
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
