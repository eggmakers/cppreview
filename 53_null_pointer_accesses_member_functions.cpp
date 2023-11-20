#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */
public:
    void showClassName()
    {
        cout << "this is a person class" << endl;
    }
    int m_Age = 0;
    void showPersonAge()
    {
        if (this == NULL)
        {
            return;
        }
        cout << "age = " << m_Age << endl;
    }
    Person(/* args */);
    ~Person();
};

Person::Person(/* args */)
{
}

Person::~Person()
{
}

void test01()
{
    Person *p = NULL;
    p->showClassName();
    p->showPersonAge();
}

void test02()
{
}

int main()
{
    test01();
    // test02();
    return 0;
}