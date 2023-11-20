#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
#include <ctime>
#include <numeric>
using namespace std;

// 集合算法

void myPrint(int val)
{
    cout << val << " ";
}

void test01() // set_intersection
{
    vector<int> v1;
    vector<int> v2;
    vector<int> vTarget;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vTarget.resize(min(v1.size(), v2.size()));
    vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    for_each(vTarget.begin(), itEnd, myPrint);
}

void test02() // set_union
{
    vector<int> v1;
    vector<int> v2;
    vector<int> vTarget;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vTarget.resize(v1.size() + v2.size());
    vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    for_each(vTarget.begin(), itEnd, myPrint);
}

void test03() // set_difference
{
    vector<int> v1;
    vector<int> v2;
    vector<int> vTarget;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vTarget.resize(max(v1.size(), v2.size()));
    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    for_each(vTarget.begin(), itEnd, myPrint);
}

int main()
{
    srand((unsigned int)time(NULL));
    // test01();
    // test02();
    test03();
    // test04();
    return 0;
}
