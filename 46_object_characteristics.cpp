#include "iostream"
#include "string"
#include <random>
using namespace std;

// 对象的初始化和清理
class Person
{
private:
    /* data */
public:
    Person();
    ~Person();
};

Person::Person()
{
    cout << "Constructor call" << endl;
}

Person::~Person()
{
    cout << "Constructor decall" << endl;
}

int main1()
{
    Person P1;
    system("pause");
    return 0;
}

// 构造函数的分类以及调用
class People
{
private:
    /* data */
    int age;

public:
    // People(int a);
    People(const People &p);
    People();
    People(int a);
    ~People();
};

People::People(int a)
{
    cout << "Constructor call" << endl;
} // 有参构造
People::People(/* args */)
{
    cout << "Constructor call" << endl;
}

People::People(const People &p)
{
    age = p.age;
    cout << "Constructor call" << endl;
} // 拷贝构造

People::~People()
{
    cout << "Constructor decall" << endl;
}

void test01()
{
    People p1;
    People p2(10);
    People p3(p2);

    // People p1(); // 默认构造不用加括号
    People p4;
    People p5 = People(10);
    People p6 = People(p5);

    // People(p3); // People(p3)=People p3;

    People p7 = 10; // People p7 = 10 =People p7(10);
}

int main2()
{
    test01();
    return 0;
}

// 拷贝构造函数的调用时机
class human
{
private:
    /* data */
public:
    human(const human &h);
    human(int age);
    human();
    ~human();
};

human::human(const human &h)
{
    cout << "Copy constructor call" << endl;
}
human::human(int age)
{
    cout << "Parameterized constructor call" << endl;
}
human::human()
{
    cout << "Constructor call" << endl;
}
human::~human()
{
    cout << "Constructor decall" << endl;
}

void test02()
{
    human h1(20);
    human h2(h1);
}

void dowork(human h)
{
}

void test03()
{
    human h;
    dowork(h);
}

human dowork02()
{
    human h;
    cout << (int *)&h << endl;
    return h;
}

void test04()
{
    human h = dowork02();
    cout << (int *)&h << endl;
}

int main3()
{
    // test02();

    // test03();

    test04();

    return 0;
}

// 构造函数的调用规则
class humanbeing
{
private:
    /* data */

public:
    int age;
    humanbeing(/* args */);
    humanbeing(int a);
    humanbeing(const humanbeing &h);
    ~humanbeing();
};

humanbeing::humanbeing(const humanbeing &h)
{
    cout << "Copy constructor call" << endl;
    // age = h.age; // 如果不写，编译器不知道值的变化
}
humanbeing::humanbeing(int a)
{
    cout << "Parameterized constructor call" << endl;
}
humanbeing::humanbeing()
{
    cout << "Constructor call" << endl;
}
humanbeing::~humanbeing()
{
    cout << "Constructor decall" << endl;
}

void test05()
{
    humanbeing h;
    h.age = 19;

    humanbeing h2(h);
    cout << h2.age << endl;
}

int main()
{
    test05();

    return 0;
}