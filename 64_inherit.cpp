#include "iostream"
#include "string"
#include <random>
using namespace std;

// 同名静态函数处理

class Base
{
private:
    /* data */
public:
    static int m_A;
    static void func()
    {
        cout << "Base - static void func()" << endl;
    }

    static void func(int a)
    {
        cout << "Base - static void func(int a)" << endl;
    }
    Base(/* args */);
    ~Base();
};
int Base::m_A = 100;

Base::Base(/* args */)
{
}

Base::~Base()
{
}

class Son : public Base
{
private:
    /* data */
public:
    static int m_A;
    static void func()
    {
        cout << "Son - static void func()" << endl;
    }
    Son(/* args */);
    ~Son();
};

int Son::m_A = 200;

Son::Son(/* args */)
{
}

Son::~Son()
{
}

void test01()
{
    Son s;
    cout << s.m_A << endl;
    cout << s.Base::m_A << endl;
    cout << Son::m_A << endl;
    cout << Son::Base::m_A << endl;
    s.func();
    s.Base::func();
    Son::func();
    Son::Base::func();
}

int main()
{
    test01();
    return 0;
}
