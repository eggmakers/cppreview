#include "iostream"
#include "string"
#include <random>
using namespace std;

// 菱形继承问题:虚继承

class Animal
{
public:
    int m_Age;
};

class sheep : virtual public Animal
{
public:
};

class horse : virtual public Animal
{
public:
};

class CNM : public horse, public sheep
{
private:
    /* data */
public:
    CNM(/* args */);
    ~CNM();
};

CNM::CNM(/* args */)
{
}

CNM::~CNM()
{
}

void test01()
{
    CNM st;
    st.sheep::m_Age = 19;
    st.horse::m_Age = 129;
    cout << st.sheep::m_Age << endl;
    cout << st.horse::m_Age << endl;
    cout << st.m_Age << endl;
}

int main()
{
    test01();
    return 0;
}
