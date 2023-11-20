#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
using namespace std;

// 函数对象的基本使用
class MyAdd
{
private:
    /* data */
public:
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }
};

class MyPrint
{
private:
    /* data */
public:
    MyPrint()
    {
        this->count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        count++;
    }
    int count;
};

void test01()
{
    MyAdd myadd;
    cout << myadd(10, 10) << endl; // 像普通函数一样使用
}

void test02()
{
    MyPrint myprint;
    myprint("Hello World");
    myprint("Hello World");
    myprint("Hello World");
    myprint("Hello World");
    cout << myprint.count << endl; // 函数对象可以有自己的状态
}

void doPrint(MyPrint &mp, string test)
{
    mp(test);
}

void test03()
{
    MyPrint myprint;
    doPrint(myprint, "Hello C++"); // 函数对象可以作为参数传递
}
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}
