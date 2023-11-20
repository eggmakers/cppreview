#include "iostream"
#include "string"
#include <random>
using namespace std;

// 继承语法

class Base1
{
private:
    /* data */
public:
    int m_A;
    Base1(/* args */);
    ~Base1();
};

Base1::Base1(/* args */)
{
    m_A = 100;
}

Base1::~Base1()
{
}

class Base2
{
private:
    /* data */
public:
    int m_A;
    int m_B;
    Base2(/* args */);
    ~Base2();
};

Base2::Base2(/* args */)
{
    m_B = 100;
    m_A = 10;
}

Base2::~Base2()
{
}

class Son : public Base1, Base2
{
public:
    int m_C;
    int m_D;
    Son()
    {
        m_C = 300;
        m_D = 400;
    }
};

void test01()
{
    Son s;
    cout << sizeof(s) << endl;
    cout << s.Base1::m_A << endl;
}

int main()
{
    test01();
    return 0;
}
