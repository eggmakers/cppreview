#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// vector赋值操作

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
    v2 = v1; // operator=
    printVector(v2);

    vector<int> v3;
    v3.assign(v1.begin(), v1.end()); // assign
    printVector(v3);

    vector<int> v4;
    v4.assign(10, 100);
    printVector(v4); // assign elem
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
