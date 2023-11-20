#include "iostream"
#include "string"
#include <random>
using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(hero heros[])
{
    hero temp;
    for (int j = 5; j > 0; j--)
        for (int i = 1; i < 5; i++)
        {

            if (heros[i].age < heros[i - 1].age)
            {
                temp = heros[i - 1];
                heros[i - 1] = heros[i];
                heros[i] = temp;
            }
        }
}

int main()
{
    hero heros[5] = {
        {"����", 23, "��"},
        {"����", 22, "��"},
        {"�ŷ�", 20, "��"},
        {"����", 21, "��"},
        {"����", 19, "Ů"},
    };
    hero temp;
    bubbleSort(heros);
    for (int i = 0; i < 5; i++)
    {
        cout << "������" << heros[i].name << " ���䣺" << heros[i].age << " �Ա�" << heros[i].sex << endl;
    }

    return 0;
}