#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// vector构造函数

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
    printVector(v1); // 无参构造

    vector<int> v2(v1.begin(), v1.end());
    printVector(v2); // 区间构造

    vector<int> v3(10, 100);
    printVector(v3); // elem构造

    vector<int> v4(v3);
    printVector(v4); // 拷贝构造
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
