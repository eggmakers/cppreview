#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
#include <stack>
#include <queue>
#include <list>
using namespace std;

// list排序案例
class Person
{
private:
    /* data */
public:
    string m_Name;
    int m_Age;
    int m_Height;
    Person(string name, int age, int height);
    ~Person();
};

Person::Person(string name, int age, int height)
{
    m_Name = name;
    m_Age = age;
    m_Height = height;
}

Person::~Person()
{
}

void printlist(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

bool myCompare(Person &p1, Person &p2)
{
    if (p1.m_Age == p2.m_Age)
        return p1.m_Height > p2.m_Height;
    else
        return p1.m_Age < p2.m_Age;
}

void test01()
{
    list<Person> l1;
    Person p1("Tom", 35, 175);
    Person p2("Hale", 45, 180);
    Person p3("Jerry", 40, 170);
    Person p4("Sam", 25, 190);
    Person p5("Tim", 35, 160);
    Person p6("John", 35, 200);

    l1.push_back(p1);
    l1.push_back(p2);
    l1.push_back(p3);
    l1.push_back(p4);
    l1.push_back(p5);
    l1.push_back(p6);

    for (list<Person>::iterator it = l1.begin(); it != l1.end(); it++)
    {
        cout << "name: " << (*it).m_Name << " Age: " << (*it).m_Age << " height: " << (*it).m_Height << endl;
    }

    cout << "---------------------------" << endl;
    cout << "After sort" << endl;
    l1.sort(myCompare);
    for (list<Person>::iterator it = l1.begin(); it != l1.end(); it++)
    {
        cout << "name: " << (*it).m_Name << " Age: " << (*it).m_Age << " height: " << (*it).m_Height << endl;
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
