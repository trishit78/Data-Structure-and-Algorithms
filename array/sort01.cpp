#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "The sorted array is "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }
        else if (arr[right] == 1 && left < right)
        {
            right--;
        }
        else if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[10] = {1, 1, 1, 0, 1, 0, 0, 1, 0, 0};

    sort(arr, 10);
    printArray(arr, 10);
}