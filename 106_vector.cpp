#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// vector容量和大小

void printVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())
    {
        cout << "v1 is empty" << endl;
    }
    else
    {
        cout << "v1 is not empty" << endl;
        cout << "The capacity of v1 is " << v1.capacity() << endl;
        cout << "The size of v1 is " << v1.size() << endl;
    }
    v1.resize(15, 100); // 默认用0填充
    printVector(v1);

    v1.resize(5); // 如果短了会删除原来的
    printVector(v1);
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
