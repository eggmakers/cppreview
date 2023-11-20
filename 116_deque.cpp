#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
using namespace std;

// deque排序操作

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
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);

    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);
    printDeque(d1);

    sort(d1.begin(), d1.end()); // 排序
    printDeque(d1);

    vector<int> v;
    v.push_back(10);
    v.push_back(100);
    v.push_back(50);
    v.push_back(400);
    v.push_back(70);
    v.push_back(200);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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
