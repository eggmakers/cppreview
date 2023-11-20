#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
public:
    int m_Age;
    string m_Name;
    Person(string name, int age)
    {
        m_Age = age;
        m_Name = name;
    }

    bool operator==(Person &p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        return false;
    }
    bool operator!=(Person &p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return false;
        }
        return true;
    }
};

void test01()
{
}

void test02()
{
    Person p1("Tom", 19);
    Person p2("Jerry", 19);
    if (p1 == p2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "No Equal" << endl;
    }
}

int main()
{
    // test01();
    test02();
    return 0;
}
