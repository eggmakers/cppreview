#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// 类模版成员函数的类外实现
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