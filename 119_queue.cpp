#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

// stack基本概念
class Person
{
private:
    /* data */
public:
    string m_Name;
    int m_Age;
    Person::Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }
};

void test01()
{
    queue<Person> q;
    Person p1("Tim", 10);
    Person p2("Tom", 10);
    Person p3("John", 10);
    Person p4("Hale", 10);
    Person p5("Jarry", 10);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    q.push(p5);

    while (!q.empty())
    {
        cout << "Top name:" << q.front().m_Name << " age:" << q.front().m_Age << endl;

        cout << "Back name:" << q.back().m_Name << " age:" << q.back().m_Age << endl;
        q.pop();
    }
    cout << q.size() << endl;
}

void test02()
{
}
int main()
{
    test01();
    // test02();
    return 0;
}
