#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */
public:
    int m_B;
    static int m_A;
    void func();
    static void func1();
    Person(/* args */);
    ~Person();
};

int Person::m_A = 10;

Person::Person(/* args */)
{
}

Person::~Person()
{
}

void test01()
{
    Person p;
    cout << sizeof(p) << endl;
}

void test02()
{
    Person p;
    cout << sizeof(p) << endl;
}

int main()
{
    // test01();
    test02();
    return 0;
}