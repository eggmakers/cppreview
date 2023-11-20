#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
using namespace std;

// deque数据存取

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
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " "; // 通过[]方式访问元素
    }
    cout << endl;
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1.at(i) << " "; // 通过at方式访问元素
    }
    cout << endl;

    cout << "The first elerm is " << d1.front() << endl;
    cout << "The last elerm is " << d1.back() << endl;
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
