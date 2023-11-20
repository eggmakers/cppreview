#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    int num = 999;
    int h, t, z = 0;

    do
    {
        h = num / 100;
        t = num % 100 / 10;
        z = num % 10;
        if (pow(h, 3) + pow(t, 3) + pow(z, 3) == num)
        {
            cout << num << endl;
        }
        num--;

    } while (num > 101);

    return 0;
}