#include "iostream"
#include <random>
#include <fstream>
using namespace std;

template <class T1, class T2>
class Person;

template <class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
    cout << "name:" << p.m_Name << " age:" << p.m_Age << endl;
}

// 类模版与友元
template <class T1, class T2>
class Person
{
    friend void printPerson(Person<T1, T2> p) // 类内实现
    {
        cout << "name:" << p.m_Name << " age:" << p.m_Age << endl;
    }
    friend void printPerson2<>(Person<T1, T2> p); // 类外实现

private:
    /* data */
    T1 m_Name;
    T2 m_Age;

public:
    Person(T1 name, T2 age)
    {
        name = m_Name;
        age = m_Age;
    }
};

void test01()
{
    Person<string, int> p1("hale", 18);
    printPerson(p1);
}

void test02()
{
    Person<string, int> p1("hale", 18);
    printPerson2(p1);
}

int main()
{
    test01();
    return 0;
}