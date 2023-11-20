#include "iostream"
#include "string"
#include <random>
using namespace std;

class Person
{
private:
    /* data */

public:
    int m_age;
    int *m_height;
    Person(/* args */);
    Person(int age, int height);
    Person(const Person &p);
    ~Person();
};

Person::Person(const Person &h)
{
    cout << "Copy constructor call" << endl;
    m_age = h.m_age;                 // ǳ�������򵥵ĵ�ַ��ֵ�Ŀ���
    m_height = new int(*h.m_height); // �����ʹ���µĵ�ַ����ԭ�е�ֵ
}
Person::Person(int age, int height)
{
    m_age = age;
    m_height = new int(height);
    cout << *m_height << endl;
    cout << "Parameterized constructor call" << endl;
}
Person::Person()
{
    cout << "Constructor call" << endl;
}
Person::~Person()
{
    // �ͷŶ�������
    if (m_height != NULL)
    {
        delete m_height;
        m_height = NULL;
    }
    cout << "Constructor decall" << endl;
}

void test01()
{
    Person p1(18, 100);
    cout << "p1������Ϊ��" << p1.m_age << "\tp1�����Ϊ��" << *p1.m_height << endl;

    Person p2(p1);
    cout << "p2������Ϊ��" << p2.m_age << "p2�����Ϊ��" << *p2.m_height << endl;
}

int main()
{
    test01();

    return 0;
}