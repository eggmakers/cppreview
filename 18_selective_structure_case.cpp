#include "iostream"
#include "string"
using namespace std;

// ��ֻС��ȱ�˭��

int main()
{
    int a, b, c = 0;
    int num = 0;
    cout << "�������һֻС�������" << endl;
    cin >> a;
    cout << "������ڶ�ֻС�������" << endl;
    cin >> b;
    cout << "���������ֻС�������" << endl;
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
        cout << "һ��С������" << endl;
        break;
    case 2:
        cout << "����С������" << endl;
        break;
    default:
        cout << "����С������" << endl;
        break;
    }

    return 0;
}