#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    int min = 0, max = 100;
    random_device seed;                           // Ӳ���������������
    ranlux48 engine(seed());                      // ���������������������
    uniform_int_distribution<> distrib(min, max); // �����������Χ����Ϊ���ȷֲ�
    int num = distrib(engine);                    // �����

    int num2 = 0;
    cout << "������һ����µ�����:" << endl;
    cin >> num2;
    while (1)
    {

        if (num2 > num)
        {
            cout << "�������̫����,����������:" << endl;
        }
        else if (num2 < num)
        {
            cout << "�������̫С��,����������:" << endl;
        }
        else
        {
            cout << "��ϲ��¶���" << endl;
            break;
        }
        cin >> num2;
    }

    return 0;
}