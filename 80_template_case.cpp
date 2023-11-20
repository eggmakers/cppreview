#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

template <typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void sort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            myswap(arr[max], arr[i]);
        }
    }
}

template <typename T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char charArr[] = "asdfg";
    int num = sizeof(charArr) / sizeof(char);
    sort(charArr, num);
    printArray(charArr, num);
}

void test02()
{
    int intArr[] = {1, 5, 9, 6, 4, 3, 7};
    int num = sizeof(intArr) / sizeof(int);
    sort(intArr, num);
    printArray(intArr, num);
}

int main()
{
    test01();
    test02();
    return 0;
}