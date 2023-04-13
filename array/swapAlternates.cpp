#include <iostream>
using namespace std;

void swapAlternates(int arr[], int n)
{
    for (int i = 0; i <= n; i += 2)
    {

        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int n)
{

    cout << "the array is"
         << " ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[7] = {1, 2, 90, 4, 56, 7, 8};
    swapAlternates(arr, 7);

    printArray(arr, 7);
}
