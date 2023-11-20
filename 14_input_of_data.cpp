#include "iostream"
#include "string"
using namespace std;

int main()
{
    int i = 0;
    cout << "input i:" << endl;
    cin >> i;
    cout << i << endl;

    float f = 0;
    cout << "input f:" << endl;
    cin >> f;
    cout << f << endl;

    char ch = 'a';
    cout << "input ch:" << endl;
    cin >> ch;
    cout << ch << endl;

    string str = "hello";
    cout << "input str:" << endl;
    cin >> str;
    cout << str << endl;

    bool flag = true;
    cout << "input flag:" << endl;
    cin >> flag;
    cout << flag << endl;

    return 0;
}