#include "iostream"
#include "string"
#include <random>
using namespace std;

// 计算器案例
class caculator
{
private:
    /* data */
public:
    int num1;
    int num2;
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return num1 + num2;
        }
        else if (oper == "-")
        {
            return num1 - num2;
        }
        else if (oper == "*")
        {
            return num1 * num2;
        }
        else if (oper == "/")
        {
            return num1 / num2;
        }
    }
    caculator(/* args */);
    ~caculator();
};

caculator::caculator(/* args */)
{
}

caculator::~caculator()
{
}

void test01()
{
    caculator c;
    c.num1 = 10;
    c.num2 = 10;
    cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
    cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
    cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
    cout << c.num1 << "/" << c.num2 << "=" << c.getResult("/") << endl;
}

int main()
{
    test01();
    return 0;
}
