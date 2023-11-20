#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
using namespace std;

// map大小和交换

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
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));
    printMap(m);

    cout << "The size of map is:" << m.size() << endl;
    if (m.empty())
        cout << "the map is  empty" << endl;
    else
        cout << "this map is not empty" << endl;

    map<int, int> m1;
    m1.insert(pair<int, int>(10, 100));
    m1.insert(pair<int, int>(20, 200));
    m1.insert(pair<int, int>(30, 300));
    m1.insert(pair<int, int>(40, 400));
    printMap(m1);
    m.swap(m1);
    printMap(m);
    printMap(m1);
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
