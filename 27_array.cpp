#include "iostream"
#include "string"
#include <random>
using namespace std;

// 定义方式
int main1()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    int arr2[5] = {1, 2, 3};
    for (int i = 0; i < 5; i++)
        cout << arr2[i] << endl;

    int arr3[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 9; i++)
        cout << arr3[i] << endl;

    return 0;
}

// 数组名
int main2()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;

    return 0;
}

// 冒泡排序
int main3()
{
    int arr[] = {2, 5, 4, 9, 0, 8, 7, 3, 6, 1};
    int temp = 0;
    for (int j = (sizeof(arr) / sizeof(arr[0])); j > 0; j--)
        for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++)
        {

            if (arr[i] < arr[i - 1])
            {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        }
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
        cout << arr[i];

    return 0;
}

// 二维数组的定义方式
int main4()
{
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    cout << arr[0][0] << endl;
    cout << arr[0][1] << endl;
    cout << arr[0][2] << endl;
    cout << arr[1][0] << endl;
    cout << arr[1][1] << endl;
    cout << arr[1][2] << endl;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }

    int arr1[2][3] = {{1, 2, 3},
                      {4, 5, 6}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }

    int arr2[2][3] = {1, 2, 3,
                      4, 5, 6};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << endl;
        }

    int arr3[][3] = {1, 2, 3,
                     4, 5, 6};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << endl;
        }
    return 0;
}

// 二维数组的数组名
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr[0][0]) << endl;

    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[0][0] << endl;
    cout << arr[1] << endl;
    cout << &arr[0][1] << endl;
    return 0;
}