#include <iostream>
#include "string"
using namespace std;
#include "swap.h"

void swap_function(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << b << endl;
}