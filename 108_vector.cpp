#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// vector数据存取

void printVector_s(vector<int> &v) // 利用[]访问
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printVector_at(vector<int> &v) // 利用[]访问
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
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
    printVector_s(v1);
    printVector_at(v1);

    cout << v1.front() << endl; // 第一个元素
    cout << v1.back() << endl;  // 最后一个元素
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
