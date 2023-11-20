#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
using namespace std;

// 一元谓词
class GreaterFive
{
private:
    /* data */
public:
    bool operator()(int val) // 一个参数为一元谓词
    {
        return val > 5;
    } // 返回值为bool的operator叫谓词
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // GreaterFive() 匿名的函数对象
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end())
        cout << "not found" << endl;
    else
        cout << "find:" << *it << endl;
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
