#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */

public:
    int m_age;
    int m_height;
    int m_weight;
    Person() : m_age(10), m_height(180), m_weight(100)
    {
    }
    Person(int age, int height, int weight) : m_age(age), m_height(height), m_weight(weight)
    {
    }
    ~Person();
};

Person::~Person()
{
}

void test01()
{
    Person p;
    cout << p.m_age << p.m_height << p.m_weight << endl;
    Person p1(30, 20, 10);
    cout << p1.m_age << p1.m_height << p1.m_weight << endl;
}

int main()
{
    test01();

    return 0;
}