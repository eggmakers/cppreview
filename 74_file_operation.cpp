#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// 文件操作 写文件

void test01()
{
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "name:hale" << endl;
    ofs << "sex:male" << endl;
    ofs << "age:18" << endl;

    ofs.close();
}

int main()
{
    test01();
    return 0;
}
