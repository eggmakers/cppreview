#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
using namespace std;

// transform

class Transform
{
public:
    int operator()(int val)
    {
        return val * 100;
    }
};

void printInt(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int> vTargt;
    vTargt.resize(v.size());
    transform(v.begin(), v.end(), vTargt.begin(), Transform());

    for_each(vTargt.begin(), vTargt.end(), printInt);
    cout << endl;
}

void test02()
{
}

void test03()
{
}
int main()
{
    test01();
    // test02();
    // test03();
    return 0;
}
