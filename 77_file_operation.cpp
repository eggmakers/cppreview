#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// 文件操作 二进制文件 写文件

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test01()
{
    ifstream ifs;
    ifs.open("Person.txt", ios::in);
    ifs.is_open() ? cout << "file open success" : cout << "file open failed";

    Person p;

    ifs.read((char *)&p, sizeof(Person));
    cout << "\nname: " << p.m_Name << " age:" << p.m_Age << endl;
}

int main()
{
    test01();
    return 0;
}
