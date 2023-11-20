#include "iostream"
#include "string"
#include <random>
using namespace std;

// 继承中的对象模型

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son : public Base
{
public:
    int m_D;
};

void test01()
{
    cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main()
{
    test01();
    return 0;
}
