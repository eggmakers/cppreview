#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */

public:
    int m_age;
    int *m_height;
    Person(/* args */);
    Person(int age, int height);
    Person(const Person &p);
    ~Person();
};

Person::Person(const Person &h)
{
    cout << "Copy constructor call" << endl;
    m_age = h.m_age;                 // 浅拷贝：简单的地址和值的拷贝
    m_height = new int(*h.m_height); // 深拷贝：使用新的地址拷贝原有的值
}
Person::Person(int age, int height)
{
    m_age = age;
    m_height = new int(height);
    cout << *m_height << endl;
    cout << "Parameterized constructor call" << endl;
}
Person::Person()
{
    cout << "Constructor call" << endl;
}
Person::~Person()
{
    // 释放堆区数据
    if (m_height != NULL)
    {
        delete m_height;
        m_height = NULL;
    }
    cout << "Constructor decall" << endl;
}

void test01()
{
    Person p1(18, 100);
    cout << "p1的年龄为：" << p1.m_age << "\tp1的身高为：" << *p1.m_height << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_age << "p2的身高为：" << *p2.m_height << endl;
}

int main()
{
    test01();

    return 0;
}