#include <iostream>
#include "myArray.h"

void printArray(myArray<int> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{
    myArray<int> arr1(5);

    // myArray<int> arr3(100);
    // arr3 = arr1;
    for (int i = 0; i < 5; i++)
    {
        arr1.Push_Back(i);
    }
    cout << "Print arr1" << endl;
    printArray(arr1);

    myArray<int> arr2(arr1);
    cout << "Print arr2" << endl;
    printArray(arr2);
    arr2.Pop_Back();

    cout << "arr1:" << arr1.getCapacity() << endl;
    cout << arr1.getSize() << endl;

    cout << "arr2:" << arr2.getCapacity() << endl;
    cout << arr2.getSize() << endl;
}

class Person
{
public:
    /* data */
    int m_Age;
    string m_Name;

    int getAge()
    {
        return m_Age;
    }

    string getName()
    {
        return m_Name;
    }

    Person(string name, int age);
    // {
    //     this->m_Age = age;
    //     this->m_Name = name;
    // }
};

Person::Person(string name, int age)
{
    this->m_Age = age;
    this->m_Name = name;
}

void printPersonArray(myArray<Person> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << "name:" << arr[i].m_Name << endl;
        cout << "age:" << arr[i].m_Age << endl;
    }
}

void test02()
{
    myArray<Person> arr(10);

    Person p1("hale", 18);
    Person p2("john", 20);
    Person p3("Bruce", 52);
    Person p4("Tom", 61);
    Person p5("Sam", 14);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    printPersonArray(arr);
    cout << "arr capacity:" << arr.getCapacity() << endl;
    cout << "arr size:" << arr.getSize() << endl;
}

int main()
{
    // test01();
    test02();
    return 0;
}
