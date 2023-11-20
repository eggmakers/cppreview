#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */
public:
    void showPerson() const
    {
        this->m_B = 100;
        // this->m_A = 100;
        // m_A = 100;
    }
    int m_A = 100;
    void func()
    {
    }
    mutable int m_B = 100;
};

void test01()
{
}

void test02()
{
    const Person p;
    // p.m_A = 100;
    p.m_B = 101; // 可以修改

    // 常对象只可以调用常函数
    p.showPerson();
    // p.func();
}

int main()
{
    test01();
    // test02();
    return 0;
}