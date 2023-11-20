#include "iostream"
#include "string"
#include <random>
using namespace std;

// 虚析构和纯虚析构

class Animal
{
public:
    Animal()
    {
        cout << "call of Animal structor" << endl;
    }
    // virtual ~Animal() // 解决子类对象释放不干净的问题
    // {
    //     cout << "call of Animal destructor" << endl;
    // }
    virtual ~Animal() = 0;
    virtual void speak() = 0;
    // virtual ~Animal() = 0;
};

Animal::~Animal() // 需要声明和实现
{
    cout << "call of Animal pure destructor" << endl;
}

class Cat : public Animal
{
public:
    void speak()
    {
        cout << *m_Name << " speak" << endl;
    }
    string *m_Name;
    Cat(string name)
    {
        cout << "Call of cat structor" << endl;
        m_Name = new string(name);
    }
    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "Call of cat destructor" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal;
}

int main()
{
    test01();
    return 0;
}
