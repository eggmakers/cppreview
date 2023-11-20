#include "iostream"
#include "string"
#include <random>
using namespace std;

// 多态的原理剖析

class Animal
{
private:
    /* data */
public:
    virtual void speak()
    {
        cout << "animal speak" << endl;
    }
};

class Cat : public Animal
{
private:
    /* data */
public:
    void speak()
    {
        cout << "cat speak" << endl;
    }
    Cat(/* args */);
    ~Cat();
};

Cat::Cat(/* args */)
{
}

Cat::~Cat()
{
}

class Dog : public Animal
{
private:
    /* data */
public:
    void speak()
    {
        cout << "Dog speak" << endl;
    }
    Dog(/* args */);
    ~Dog();
};

Dog::Dog(/* args */)
{
}

Dog::~Dog()
{
}

void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Animal a;
    cout << sizeof(Animal) << endl;
}

int main()
{
    test01();
    return 0;
}
