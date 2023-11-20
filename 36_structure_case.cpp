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
        {"Áõ±¸", 23, "ÄÐ"},
        {"¹ØÓð", 22, "ÄÐ"},
        {"ÕÅ·É", 20, "ÄÐ"},
        {"ÕÔÔÆ", 21, "ÄÐ"},
        {"õõ²õ", 19, "Å®"},
    };
    hero temp;
    bubbleSort(heros);
    for (int i = 0; i < 5; i++)
    {
        cout << "ÐÕÃû£º" << heros[i].name << " ÄêÁä£º" << heros[i].age << " ÐÔ±ð£º" << heros[i].sex << endl;
    }

    return 0;
}