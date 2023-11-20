#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
using namespace std;

// map插入和删除

void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(map<int, int>::value_type(3, 30));
    m[4] = 40;
    printMap(m);
    cout << m[5] << endl; // 不建议使用它插入，但看可以使用访问

    m.erase(m.begin());
    printMap(m);

    m.erase(3); // 按照key删除
    printMap(m);

    m.erase(m.begin(), m.end());
    m.clear();
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
