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

// 算术生成算法

void myPrint(int val)
{
    cout << val << " ";
}

void test01() // accumulate
{
    vector<int> v;
    for (int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }
    int total = accumulate(v.begin(), v.end(), 0);
    cout << "total = " << total << endl;
    total = accumulate(v.begin(), v.end(), 1000);
    cout << "total = " << total << endl;
}

void test02() // fill
{
    vector<int> v;
    v.resize(10);
    fill(v.begin(), v.end(), 100);
    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    srand((unsigned int)time(NULL));
    // test01();
    test02();
    // test03();
    // test04();
    return 0;
}
