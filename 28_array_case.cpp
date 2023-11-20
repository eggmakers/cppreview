#include "iostream"
#include "string"
#include <random>
using namespace std;

int main()
{
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > arr[i - 1])
            max = arr[i];
        else
            max = arr[i - 1];
    }
    cout << "最重的小猪的体重为：" << max << endl;

    int arr1[5] = {1, 3, 2, 5, 4};
    int arr2[5];
    max = sizeof(arr1) / sizeof(arr1[0]) - 1;
    for (int i = 0; i < 5; i++)
    {
        arr2[max] = arr1[i];
        max--;
    }
    for (int i = 0; i < 5; i++)
        cout << arr2[i];
    return 0;
}