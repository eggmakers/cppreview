#include "iostream"
#include "string"
using namespace std;

int main()
{
    int a = 0;
    cout << "write a number" << endl;
    cin >> a;
    if (a > 600)
    {
        if (a > 700)
            cout << a << endl;
        else
            cout << "lalala" << endl;
    }
    else if (a > 500)
    {
        cout << -a << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}