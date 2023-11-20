#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
using namespace std;

// for_each

void print01(int val)
{
    cout << val << " ";
}

class print02
{
private:
    /* data */
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print01);
    cout << endl;

    for_each(v.begin(), v.end(), print02());
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
