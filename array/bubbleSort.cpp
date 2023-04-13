#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[10] = {4, 5, 7, 9, 3, 54, 67, 87, 32, 10};
    cout << " bubble Sort " << bubbleSort(arr, 10) << endl;
}