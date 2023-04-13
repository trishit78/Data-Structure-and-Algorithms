#include <iostream>
using namespace std;

void reverse(int array[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {5, 6, 7, 89, 1, 3};
    int brr[5] = {9, 45, 6, 35, 32};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}