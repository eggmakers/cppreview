#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person &p);
    friend void test01();
    friend Person operator+(Person &p1, int num);
    friend Person operator+(Person &p1, Person &p2);

private:
    // Person operator+(Person &p)// 加号运算符重载
    // {
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // } // 成员函数

    int m_A;
    int m_B;

public:
    Person()
    {
    }
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
};

Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
} // 全局函数

Person operator+(Person &p1, int num)
{
    Person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
} // 全局函数

ostream &operator<<(ostream &cout, Person &p) // 左移运算符重载
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
    return cout;
}
void test01()
{
    Person p1(10, 10);
    Person p2(10, 10);

    Person p3 = p1 + p2;
    Person p4 = p1 + 10;
    cout << p3.m_A << p3.m_B << endl;
    cout << p4.m_A << p4.m_B << endl;
}

void test02()
{
    Person p(10, 10);

    cout << p << endl;
}

int main1()
{
    // test01();
    test02();
    return 0;
}

class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

private:
    /* data */
    int m_Num;

public:
    MyInteger &operator++()
    {
        m_Num++;
        return *this;
    }
    MyInteger operator++(int)
    {
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

    MyInteger &operator--()
    {
        m_Num--;
        return *this;
    }
    MyInteger operator--(int)
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }

    MyInteger(/* args */);
    ~MyInteger();
};

MyInteger::MyInteger(/* args */)
{
    m_Num = 0;
}

MyInteger::~MyInteger()
{
}

ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num << endl;
    return cout;
}

void test03()
{
    MyInteger myint;

    cout << ++myint << endl;
    cout << myint++ << endl;
    cout << myint << endl;
}

void test04()
{
    MyInteger myint;
    cout << --myint << endl;
    cout << myint-- << endl;
    cout << myint << endl;
}

int main()
{
    // test03();
    test04();
    return 0;
}