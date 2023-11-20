#include "iostream"
#include "string"
#include <random>
using namespace std;

class MakeDrink
{
public:
    void boil()
    {
        cout << "Boil water" << endl;
    }
    virtual void brew() = 0;
    void decant()
    {
        cout << "decant" << endl;
    }
    virtual void seasoning() = 0;

    void makedrink()
    {
        boil();
        brew();
        decant();
        seasoning();
    }
};

class Coffee : public MakeDrink
{
public:
    void brew()
    {
        cout << "Brew coffee" << endl;
    }
    void seasoning()
    {
        cout << "Add sugar and milk" << endl;
    }
};

class Tea : public MakeDrink
{
public:
    void brew()
    {
        cout << "Brew tea" << endl;
    }
    void seasoning()
    {
        cout << "Add lemon" << endl;
    }
};

void test01()
{

    // Base b; // 抽象类不可以实例化对象
    MakeDrink *drink = new Coffee;
    drink->makedrink();
}

int main()
{
    test01();
    return 0;
}
