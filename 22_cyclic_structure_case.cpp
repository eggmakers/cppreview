#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    int min = 0, max = 100;
    random_device seed;                           // 硬件生成随机数种子
    ranlux48 engine(seed());                      // 利用种子生成随机数引擎
    uniform_int_distribution<> distrib(min, max); // 设置随机数范围，并为均匀分布
    int num = distrib(engine);                    // 随机数

    int num2 = 0;
    cout << "请输入一个你猜的数字:" << endl;
    cin >> num2;
    while (1)
    {

        if (num2 > num)
        {
            cout << "你的数字太大了,请重新输入:" << endl;
        }
        else if (num2 < num)
        {
            cout << "你的数字太小了,请重新输入:" << endl;
        }
        else
        {
            cout << "恭喜你猜对了" << endl;
            break;
        }
        cin >> num2;
    }

    return 0;
}