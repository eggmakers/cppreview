#include "iostream"
#include "string"
#include <random>
using namespace std;

class Phone
{
private:
    /* data */
public:
    Phone(string pName);
    string m_p_name;
    Phone(/* args */);
    ~Phone();
};

Phone::Phone(string pName)
{
    m_p_name = pName;
    cout << "Phone" << endl;
}

Phone::~Phone()
{
    cout << "Phone" << endl;
}

class Person
{
private:
    /* data */
public:
    string m_name;
    Phone m_phone;
    Person(string name, string pName) : m_name(name), m_phone(pName)
    {
        cout << "Person" << endl;
    }
    ~Person();
};

Person::~Person()
{
    cout << "Person" << endl;
}

void test01()
{
    Person p("john", "iphone");
    cout << p.m_name << p.m_phone.m_p_name << endl;
}

int main()
{
    test01();
    return 0;
}