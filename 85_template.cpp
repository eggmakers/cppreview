#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// 类模版和函数模版的区别
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

void test01()
{
    Person<string> p1("hale", 18);
    p1.showPerson();
}

int main()
{
    test01();
    return 0;
}