#include "iostream"
#include "string"
#include <random>
using namespace std;

// 同名函数处理

class Base
{
private:
    /* data */
public:
    int m_A = 100;
    Base(/* args */);
    ~Base();

    void func()
    {
        cout << "base-func called" << endl;
    }
    void func(int a)
    {
        cout << "base-func(int) called" << endl;
    }
};

Base::Base(/* args */)
{
    m_A = 100;
}

Base::~Base()
{
}

class Son : public Base
{
private:
    /* data */
public:
    Son(/* args */);
    ~Son();
    void func()
    {
        cout << "son-func called" << endl;
    }
};

Son::Son(/* args */)
{
    m_A = 200;
}

Son::~Son()
{
}

void test01()
{
    Son s;
    cout << s.m_A << endl;
    s.Base::func(10);
}

int main()
{
    test01();
    return 0;
}
