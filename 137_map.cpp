#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
using namespace std;

// map排序
class MyCompare
{
private:
    /* data */
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

void printMap(map<int, int, MyCompare> &m)
{
    for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int, MyCompare> m;
    m.insert(pair<int, int>(5, 10));
    m.insert(make_pair(2, 20));
    m.insert(map<int, int>::value_type(3, 30));
    m[4] = 40;

    printMap(m);
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
