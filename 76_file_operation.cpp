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
    ofstream ofs;
    ofs.open("Person.txt", ios::out | ios::binary);
    Person p = {"Hale", 19};
    ofs.write((const char *)&p, sizeof(Person));
    ofs.close();
}

int main()
{
    test01();
    return 0;
}
