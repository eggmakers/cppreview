#include "iostream"
#include "string"
#include <random>
using namespace std;

// 属性和行为作为整体

const float PI = 3.14;

class Circle
{
public:
    int r;
    double calc_per()
    {
        return 2 * PI * r;
    }
};

int main1()
{
    Circle c1;
    c1.r = 10;
    cout << c1.calc_per() << endl;

    return 0;
}

// 访问权限
// public 类内可以访问 类外可以访问
// protected 类内可以访问，类外不可以访问 儿子可以访问父亲保护的内容
// private 类内可以访问，类外不可以访问   儿子不可以访问父亲私有的内容

class People
{
public:
    string name;

protected:
    string car;

private:
    int Password;

public:
    void func()
    {
        name = "hale";
        car = "Xiaopeng";
        Password = 123456;
    }
};

int main2()
{
    People p1;

    p1.name = "john";
    // p1.car="tuolaji";
    // p1.Password="1322"; //无法访问

    return 0;
}

// struct 和 class 的区别
class C1
{
    int A; // 默认权限是私有
};

struct C2
{
    int A; // 默认权限是公有
};

int main3()
{
    C1 c1;
    // c1.A = 100;
    C2 c2;
    c2.A = 100;
    return 0;
}

// 将成员属性设为私有
class Person
{
public:
    void setName(string m_Name)
    {
        name = m_Name;
    }

    string getName()
    {
        return name;
    } // 可读写

    int getAge()
    {
        age = 0;
        return age;
    } // 只读

    void setAge(int m_age)
    {
        if (m_age < 0 || m_age > 150)
        {
            age = 0;
            cout << "Invalid age" << endl;
            return;
        }
        age = m_age;
    }

    void setLover(string name)
    {
        lover = name;
    } // 只写

private:
    string name;
    int age;
    string lover;
};

int main()
{
    Person p;
    p.setName("hale");
    cout << p.getName() << endl;
    p.setAge(1000);
    cout << p.getAge() << endl;
    p.setLover("john");
    return 0;
}