#include "iostream"
#include "string"
#include <random>
using namespace std;

void bubbleSort(int *arr, int len)
{

    for (int j = len; j > 0; j--)
        for (int i = 1; i < len; i++)
        {

            if (arr[i] < arr[i - 1])
            {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        }
}

int main()
{
    int arr[] = {2, 5, 4, 9, 0, 8, 7, 3, 6, 1};
    bubbleSort(arr, 10);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        cout << arr[i] << endl;
    return 0;
}