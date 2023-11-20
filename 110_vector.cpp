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
    vector<int> v;

    int num = 0;
    int *p = NULL;
    v.reserve(100000);
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);

        if (p != &v[0])
        {
            p = &v[0];
            num++; // 看开辟了多少次内存
        }
    }
    cout << "num:" << num << endl;
    // printVector(v);
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
