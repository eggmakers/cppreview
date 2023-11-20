#include "iostream"
#include "string"
#include <random>
using namespace std;

class Base1
{

protected:
    int m_B;

private:
    int m_C;
    /* data */
public:
    int m_A;
    Base1(/* args */);
    ~Base1();
};

class Son1 : public Base1
{
private:
    /* data */
public:
    void func()
    {
        m_A = 0;
        m_B = 0;
        // m_C = 0;
    }
};

class Son1 : protected Base1
{
private:
    /* data */
public:
    void func()
    {
        m_A = 0;
        m_B = 0;
        // m_C = 0;
    }
};

class Son1 : private Base1
{
private:
    /* data */
public:
    void func()
    {
        m_A = 0;
        m_B = 0;
        // m_C = 0;
    }
};

Base1::Base1(/* args */)
{
}

Base1::~Base1()
{
}

int main()
{
    return 0;
}
