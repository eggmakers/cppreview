#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
#include <ctime>
using namespace std;

// 拷贝和替换算法

void myPrint(int val)
{
    cout << val << " ";
}

class AgeGreater5
{
private:
    /* data */
public:
    bool operator()(int val)
    {
        return val >= 5;
    }
};

void test01() // copy
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    vector<int> v2;
    v2.resize(v1.size());
    copy(v1.begin(), v1.end(), v2.begin());
    for_each(v2.begin(), v2.end(), myPrint);
}

void test02() // replace
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    replace(v1.begin(), v1.end(), 2, 4);
    replace(v1.begin(), v1.end(), 4, 7);
    for_each(v1.begin(), v1.end(), myPrint);
}

void test03() // replace_if
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    replace_if(v1.begin(), v1.end(), AgeGreater5(), 4);
    for_each(v1.begin(), v1.end(), myPrint);
}

void test04() // swap
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 100);
    }
    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;
    for_each(v2.begin(), v2.end(), myPrint);
    cout << endl;
    cout << "---------------" << endl;
    swap(v1, v2);
    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;
    for_each(v2.begin(), v2.end(), myPrint);
    cout << endl;
}

int main()
{
    srand((unsigned int)time(NULL));
    // test01();
    // test02();
    // test03();
    test04();
    return 0;
}
