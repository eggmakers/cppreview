#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// vector存放自定义数据类型

class Person
{
private:
    string m_Name;
    int m_Age;

public:
    string getName()
    {
        return m_Name;
    }
    int getAge()
    {
        return m_Age;
    }
    Person(string name, int age);
    ~Person();
};

Person::Person(string name, int age)
{
    this->m_Age = age;
    this->m_Name = name;
}

Person::~Person()
{
}

void test01()
{
    vector<Person> v;
    Person p1("a", 10);
    Person p2("b", 11);
    Person p3("c", 12);
    Person p4("d", 13);
    Person p5("e", 14);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name:" << (*it).getName() << " age:" << it->getAge() << endl;
    }
}

void test02()
{
    vector<Person *> v;
    Person p1("a", 10);
    Person p2("b", 11);
    Person p3("c", 12);
    Person p4("d", 13);
    Person p5("e", 14);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name:" << (*it)->getName() << " age:" << (*it)->getAge() << endl;
    }
}
int main()
{
    // test01();
    test02();
    return 0;
}
