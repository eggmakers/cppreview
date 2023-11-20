#include "iostream"
#include "string"
#include <random>
using namespace std;

// break
int main1()
{
    cout << "choose one" << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    int num = 0;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "easy" << endl;
        break;
    case 2:
        cout << "normal" << endl;
        break;
    case 3:
        cout << "hard" << endl;
        break;

    default:
        break;
    }

    return 0;
}

int main2()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}

int main3()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
                break;
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// continue
int main4()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}

// goto
int main()
{
    goto FLAG;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
FLAG:
    cout << "5" << endl;
    cout << "6" << endl;
    cout << "7" << endl;

    return 0;
}