#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */
public:
    int age;

    Person &PersonAddAge(Person &p)
    {
        this->age += p.age;

        return *this;
    }
    Person(int age);
    ~Person();
};

Person::Person(int age)
{
    this->age = age;
}

Person::~Person()
{
}

void test01()
{
    Person p1(18);
    cout << p1.age << endl;
}

void test02()
{
    Person p1(10);
    Person p2(10);

    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout << p2.age << endl;
}

int main()
{
    // test01();
    test02();
    return 0;
}