#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */
    static int m_B;
    int m_C;
    static void func2();

public:
    static void func();
    static int m_A;
    Person(/* args */);
    ~Person();
};

int Person::m_A = 10;
int Person::m_B = 100;

Person::Person(/* args */)
{
}

Person::~Person()
{
}

void Person::func()
{
    m_A = 100;
    // m_C = 100;
    cout << "static func called" << endl;
}

void Person::func2()
{
    m_A = 100;
    // m_C = 100;
    cout << "static func called" << endl;
}

void test01()
{
    Person p;
    p.m_A = 100;
    Person p1;
    cout << p1.m_A << endl;
}

void test02()
{
    // 通过对象进行访问
    Person p;
    cout << p.m_A << endl;
    // 通过类名进行访问
    cout << Person::m_A << endl;
    // cout << Person::m_B << endl; // 类外访问不到类内的数据
}

void test03()
{
    Person p;
    p.func();
    // p.func2();

    Person::func();
}

int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}