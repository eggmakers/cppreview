#include "iostream"
#include "string"
#include <random>
using namespace std;

class MyPrint
{
private:
    /* data */
public:
    MyPrint(/* args */);
    ~MyPrint();
    void operator()(string test)
    {
        cout << test << endl;
    }
};

MyPrint::MyPrint(/* args */)
{
}

MyPrint::~MyPrint()
{
}

void test02()
{
    MyPrint myprint;
    myprint("HelloWorld");
}

int main()
{
    // test01();
    test02();
    return 0;
}
