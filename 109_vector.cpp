#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// vector互换容器

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

    vector<int> v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    v2.swap(v1); // 互换
    printVector(v1);
    printVector(v2);
}

void test02()
{
    vector<int> v;
    for (int i = 0; i < 10000; i++)
    {
        v.push_back(i);
    }
    v.resize(3);
    cout << "The capacity of v is " << v.capacity() << endl;
    cout << "The size of v is " << v.size() << endl;

    vector<int>(v).swap(v);
    cout << "The capacity of v is " << v.capacity() << endl;
    cout << "The size of v is " << v.size() << endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}
