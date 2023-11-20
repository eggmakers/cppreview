#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// 模版的局限性

class Person
{
private:
    /* data */
public:
    string m_name;
    string m_age;

    // bool operator==(Person &p)
    // {
    //     if (this->m_name == p.m_name && this->m_age == p.m_age)
    //     {
    //         return true;
    //     }
    //     return false;
    // } // 方法一

    Person(string name, int age);
    ~Person();
};

Person::Person(string name, int age)
{
    this->m_name = name;
    this->m_age = age;
}

Person::~Person()
{
}

template <class T>
bool Compare(T a, T b)
{
    if (a == b)
        return true;
    else
        return false;
}

bool Compare(Person &a, Person &b)
{
    if (a.m_name == b.m_name && a.m_age == b.m_age)
    {
        return true;
    }
    return false;
} // 方法二

void test01()
{
    int a = 10;
    int b = 20;
    Compare(a, b) ? cout << "a=b" << endl : cout << "a!=b" << endl;
}

void test02()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    Compare(p1, p2) ? cout << "a=b" << endl : cout << "a!=b" << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}