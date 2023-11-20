#include "iostream"
#include "string"
#include <random>
using namespace std;

// 多态的基本概念

class Animal
{
private:
    /* data */
public:
    virtual void speak()
    {
        cout << "animal speak" << endl;
    }
    Animal(/* args */);
    ~Animal();
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

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}

void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    Dog dog;
    doSpeak(cat);
    doSpeak(dog);
}

int main()
{
    test01();
    return 0;
}
