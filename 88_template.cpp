#include "iostream"
#include <random>
#include <fstream>
using namespace std;

// 类模版与继承

template <class T>
class Base
{
private:
    /* data */
public:
    T m;
};

class Son : public Base<int> // 必须知道父类的数据类型
{
private:
    /* data */
public:
};

void test01()
{
    Son s1;
}

template <class T1, class T2>
class Son2 : public Base<T1>
{
private:
    /* data */
public:
    T2 obj;
    Son2()
    {
        cout << "T1 type:" << typeid(T1).name() << endl;
        cout << "T2 type:" << typeid(T2).name() << endl;
    }
};

void test02()
{
    Son2<int, char> s2; // 如果像灵活指定父类的T类型，子类亦需要变模版
}

int main()
{
    test02();
    return 0;
}