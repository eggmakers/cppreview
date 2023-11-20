#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// 类模版中成员函数的创建时机

class Person1
{
private:
    /* data */
public:
    void showPerson1()
    {
        cout << "Person show1" << endl;
    }
};

class Person2
{
private:
    /* data */
public:
    void showPerson2()
    {
        cout << "Person show1" << endl;
    }
};

template <class T>
class MyClass
{
private:
    /* data */
public:
    T obj;

    void func1()
    {
        obj.showPerson1();
    }
    void func2()
    {
        obj.showPerson2();
    }
};

void test01()
{
    MyClass<Person1> m;
    m.func1();
    // m.func2();
}

int main()
{

    test01();
    return 0;
}