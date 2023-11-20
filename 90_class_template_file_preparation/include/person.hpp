#pragma once
#include <fstream>
using namespace std;

template <class NameType, class AgeType>
class Person
{
private:
    /* data */
public:
    NameType m_Name;
    AgeType m_Age;
    Person(NameType name, AgeType age);
    // {
    //     this->m_Age = age;
    //     this->m_Name = name;
    // }
    void showPerson();
    // {
    //     cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
    // }
};