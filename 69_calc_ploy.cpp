#include "iostream"
#include "string"
#include <random>
using namespace std;

// 计算器案例(多态)
class caculator
{
private:
    /* data */
public:
    virtual int getResult()
    {
        return 0;
    }
    int num1;
    int num2;
    caculator(/* args */);
    ~caculator();
};

caculator::caculator(/* args */)
{
}

caculator::~caculator()
{
}

class AddCaculator : public caculator
{
public:
    int getResult()
    {
        return num1 + num2;
    }
};

class SubCaculator : public caculator
{
public:
    int getResult()
    {
        return num1 - num2;
    }
};

class SumCaculator : public caculator
{
public:
    int getResult()
    {
        return num1 * num2;
    }
};

class DelCaculator : public caculator
{
public:
    int getResult()
    {
        return num1 / num2;
    }
};

void test01()
{
    caculator *c = new AddCaculator;
    c->num1 = 10;
    c->num2 = 10;
    cout << c->num1 << "+" << c->num2 << "=" << c->getResult() << endl;
    delete c;
    c = new SubCaculator;
    c->num1 = 10;
    c->num2 = 10;
    cout << c->num1 << "-" << c->num2 << "=" << c->getResult() << endl;
    delete c;
    c = new SumCaculator;
    c->num1 = 10;
    c->num2 = 10;
    cout << c->num1 << "*" << c->num2 << "=" << c->getResult() << endl;
    delete c;
    c = new DelCaculator;
    c->num1 = 10;
    c->num2 = 10;
    cout << c->num1 << "/" << c->num2 << "=" << c->getResult() << endl;
}

int main()
{
    test01();
    return 0;
}
