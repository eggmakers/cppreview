#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
using namespace std;

// deque大小操作

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    if (d1.empty())
    {
        cout << "d1 is emptty" << endl;
    }
    else
    {
        cout << "d1 is not emptty" << endl;
        cout << "The size of d1 is " << d1.size() << endl; // deque美誉容量的概念
    }
    d1.resize(15);
    printDeque(d1);

    d1.resize(10);
    printDeque(d1);

    d1.resize(15, 1);
    printDeque(d1);
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
