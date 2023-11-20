#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
#include <stack>
using namespace std;

// stack基本概念

void test01()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty())
    {
        cout << "top of stack is" << s.top() << endl;

        s.pop();
    }
    cout << "size of stack:" << s.size() << endl;
}

void test02()
{
}
int main()
{
    test01();
    // test02();
    return 0;
}
