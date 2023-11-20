#include "iostream"
#include "string"
#include <random>
using namespace std;

struct student
{
    string name;
    int score;
};

struct teacher
{
    string name;
    student stu[5];
};

int main()
{
    teacher t[] =
        {
            {"hale", "q", 100, "w", 90, "e", 85, "r", 86, "t", 85},
            {"john", "q", 100, "w", 90, "e", 85, "r", 86, "t", 85},
            {"yale", "q", 100, "w", 90, "e", 85, "r", 86, "t", 85},
        };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << t[i].name << t[i].stu[j].name << t[i].stu[j].score << endl;
        }
    }

    return 0;
}