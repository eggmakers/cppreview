#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

// 文件操作 写文件

void test01()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    ifs.is_open() ? cout << "file open success" : cout << "file open failed";

    // 读数据
    // 第一种
    // char buf[1024] = {0};
    // while (ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    // 第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf, sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    // 第三种
    // string buf;
    // while (getline(ifs, buf))
    // {
    //     cout << buf << endl;
    // }

    //  第四种
    char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }

    ifs.close();
}

int main()
{
    test01();
    return 0;
}
