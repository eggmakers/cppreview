#include "iostream"
#include "string"
using namespace std;

// 三只小猪比比谁重

int main()
{
    int a, b, c = 0;
    int num = 0;
    cout << "请输入第一只小猪的重量" << endl;
    cin >> a;
    cout << "请输入第二只小猪的重量" << endl;
    cin >> b;
    cout << "请输入第三只小猪的重量" << endl;
    cin >> c;

    if (a > b)
    {
        if (a > c)
            num = 1;
        else
            num = 3;
    }
    else if (a < b)
    {
        if (b > c)
            num = 2;
        else
            num = 3;
    }
    switch (num)
    {
    case 1:
        cout << "一号小猪最重" << endl;
        break;
    case 2:
        cout << "二号小猪最重" << endl;
        break;
    default:
        cout << "三号小猪最重" << endl;
        break;
    }

    return 0;
}