#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    int arr[3][3] =
        {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}};
    int score = 0;
    string name[] = {"����", "����", "����"};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            score += arr[i][j];
            if (j == 2)
            {
                cout << name[i] << "�ķ���Ϊ" << score << endl;
                score = 0;
            }
        }
    return 0;
}