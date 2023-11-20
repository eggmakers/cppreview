#include "iostream"
#include "string"
using namespace std;

int main()
{
    int num = 0;
    while (num < 10)
    {
        cout << num << endl;

        num++;
    }
    num = 0;
    do
    {
        cout << num << endl;
        num++;
    } while (num < 10);
    num = 0;
    for (; num < 10; num++)
    {
        cout << num << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}