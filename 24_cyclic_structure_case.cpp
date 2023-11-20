#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    int num = 100;
    for (; num > 0; num--)
    {
        if (num % 7 == 0 || num / 10 == 7 || num % 10 == 7)
        {
            cout << "ÇÃ×À×Ó" << endl;
        }
        else
            cout << num << endl;
    }

    return 0;
}