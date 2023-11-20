#include "iostream"
#include "string"
#include <random>
using namespace std;

// 纯虚函数和抽象类

class Base // 纯虚函数
{
public:
    virtual void func() = 0;
};

class Son : public Base
{
public:
    void func()
    {
        cout << "func called" << endl;
    }
};

class Son2 : public Base
{
public:
    virtual void func()
    {
        cout << "virtual func called" << endl;
    }
};

void test01()
{

    // Base b; // 抽象类不可以实例化对象
    Base *base = new Son2;
    base->func();
}

int main()
{
    test01();
    return 0;
}
