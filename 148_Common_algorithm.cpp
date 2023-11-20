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

// 排序算法

void myPrint(int val)
{
    cout << val << " ";
}

void test01() // sort
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(), v.end(), 50);
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

class Person
{
private:
    /* data */
public:
    string m_Name;
    int m_Age;

    bool operator==(const Person &p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        else
            return false;
    }
    Person(string name, int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
};

void test02() // random_shuffle
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    random_shuffle(v.begin(), v.end());

    for_each(v.begin(), v.end(), myPrint);
}

void test03() // merge
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 10);
    }
    vector<int> vTarget;
    vTarget.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), vTarget.end(), myPrint);
}

void test04() // reverse
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    reverse(v1.begin(), v1.end());
    for_each(v1.begin(), v1.end(), myPrint);
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
