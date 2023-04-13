#include <iostream>
using namespace std;

void sumOfArray(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    cout << "Sum is " << sum << endl;
}

int main()
{

    int arr[10] = {1, 2, 4, 56, 7, 8};

    sumOfArray(arr, 10);

    return 0;
}