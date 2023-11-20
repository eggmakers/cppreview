#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// 类模版对象做函数参数

template <class NameType, class AgeType = int> // 类模版的类型可以有默认参数
class Person
{
private:
    /* data */
public:
    NameType m_Name;
    AgeType m_Age;
    Person(NameType name, AgeType age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
    void showPerson()
    {
        cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
    }
};

void printPerson1(Person<string, int> &p) // 指定传入类型
{
    p.showPerson();
}

void test01()
{
    Person<string, int> p1("hale", 19);
    printPerson1(p1);
}

template <class T1, class T2>
void printPerson2(Person<T1, T2> &p) // 参数模板化
{
    p.showPerson();
    cout << "Type T1:" << typeid(T1).name() << endl;
    cout << "Type T2:" << typeid(T2).name() << endl;
}

void test02()
{
    Person<string, int> p2("john", 29);
    printPerson2(p2);
}

template <class T>
void printPerson3(T &p) // 参数模板化
{
    p.showPerson();
    cout << "Type T:" << typeid(T).name() << endl;
}

void test03()
{
    Person<string, int> p3("kale", 36);
    printPerson3(p3);
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}