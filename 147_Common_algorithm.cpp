#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <functional>
using namespace std;

// 查找算法

void test01() // find
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(), v.end(), 50);
    if (it == v.end())
        cout << "not find" << endl;
    else
    {
        cout << "find it" << endl;
        cout << *it << endl;
    }
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

    bool operator()(const Person &p)
    {
        return (this->m_Name == p.m_Name && this->m_Age == p.m_Age);
    }
};

void test02()
{
    vector<Person> v;
    Person A("A", 19);
    Person B("B", 19);
    Person C("CD", 19);
    Person D("D", 19);
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    v.push_back(D);

    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name:" << (*it).m_Name << " age:" << it->m_Age << endl;
    }

    Person E("CD", 19);

    vector<Person>::iterator it = find(v.begin(), v.end(), E);
    if (it == v.end())
        cout << "not find" << endl;
    else
    {
        cout << "find it" << endl;
        cout << "name:" << (*it).m_Name << " age:" << (*it).m_Age << endl;
    }
}

class GreaterFive
{
private:
    /* data */
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test03() // find_if
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end())
    {
        cout << "not find" << endl;
    }
    else
    {
        cout << "find it" << endl;
        cout << (*it) << endl;
    }
}

void test04()
{
    vector<Person> v;

    Person A("A", 19);
    Person B("B", 19);
    Person C("CD", 19);
    Person D("D", 19);

    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    v.push_back(D);

    Person E("A", 19);

    vector<Person>::iterator it = find_if(v.begin(), v.end(), E);
    if (it == v.end())
    {
        cout << "not find" << endl;
    }
    else
    {
        cout << "find it" << endl;
        cout << "name:" << (*it).m_Name << " age:" << (*it).m_Age << endl;
    }
}

void test05() // adjacent_find相邻重复元素
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    v.push_back(3);
    v.push_back(3);
    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    if (it == v.end())
    {
        cout << "not find" << endl;
    }
    else
    {
        cout << "find it" << endl;
        cout << (*it) << endl;
    }
}

void test06() // binary_search 必须是排好序的容器
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    if (binary_search(v.begin(), v.end(), 9))
        cout << "find it" << endl;
    else
        cout << "no find" << endl;
}

void test07() // count
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        v.push_back(i);
    }
    cout << count(v.begin(), v.end(), 4) << endl;
}

void test08()
{
    vector<Person> v;

    Person A("A", 19);
    Person B("B", 19);
    Person C("CD", 19);
    Person D("D", 19);
    Person E("CD", 19);

    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    v.push_back(D);
    v.push_back(E);

    cout << count(v.begin(), v.end(), E) << endl;
}

void test09() // count_if
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        v.push_back(i);
    }
    cout << count_if(v.begin(), v.end(), GreaterFive()) << endl;
}

class AgeGreater5
{
private:
    /* data */
public:
    bool operator()(const Person &p)
    {
        return p.m_Age > 5;
    }
};

void test10()
{
    vector<Person> v;

    Person A("A", 19);
    Person B("B", 19);
    Person C("CD", 19);
    Person D("D", 19);
    Person E("CD", 19);

    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    v.push_back(D);
    v.push_back(E);

    cout << count_if(v.begin(), v.end(), AgeGreater5()) << endl;
}

int main()
{
    // test01();
    // test02();
    // test03();
    // test04();
    // test05();
    // test06();
    // test07();
    // test08();
    // test09();
    test10();
    return 0;
}
