#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << j << "*" << i << "=" << i * j << " ";
            if (i == j)
            {
                cout << endl;
                break;
            }
        }
    }

    return 0;
}