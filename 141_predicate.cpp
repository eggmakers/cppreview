#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
using namespace std;

// 二元谓词
class Mycompare
{
private:
    /* data */
public:
    bool operator()(int val1, int val2) // 两个参数为二元谓词
    {
        return val1 > val2;
    } // 返回值为bool的operator叫谓词
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);

    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), Mycompare());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
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
