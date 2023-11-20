#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
public:
    int *m_Age;
    Person(int age)
    {
        m_Age = new int(age);
    }
    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }
    Person &operator=(Person &p)
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age);
        return *this;
    }
};

void test01()
{
}

void test02()
{
    Person p(10);
    Person p2(20);
    Person p3(10);

    p2 = p = p3;

    cout << *p.m_Age << endl;
    cout << *p2.m_Age << endl;
    cout << *p3.m_Age << endl;
}

int main()
{
    // test01();
    test02();
    return 0;
}
