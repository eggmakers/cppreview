#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
using namespace std;

// set容器排序--自定义数据类型

class Person
{
private:
    /* data */
public:
    string m_Name;
    int m_Age;
    Person(string name, int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
};

class ComparePerson
{
private:
    /* data */
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        return p1.m_Age > p2.m_Age;
    }
};

void test01()
{
    set<Person, ComparePerson> s1; // 指定排序规则
    Person p1("hale", 19);
    Person p2("Tom", 23);
    Person p3("Jerry", 30);
    Person p4("Tim", 34);

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);

    for (set<Person, ComparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout << "name:" << (*it).m_Name << " age:" << it->m_Age << endl;
    }
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
