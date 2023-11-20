#include <iostream>
#include <fstream>
#include "person.hpp"
using namespace std;

template <class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age)
{
    this->m_Age = age;
    this->m_Name = name;
}

template <class NameType, class AgeType>
void Person<NameType, AgeType>::showPerson()
{
    cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
}

void test01()
{
    Person<string, int> p1("Tom", 18);
    p1.showPerson();
}

int main()
{
    test01();
    return 0;
}