#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Print done" << endl;
}

int main()
{
    int arr[] ;
    int n = 10;
    printArray(arr, 10);

    return 0;
}