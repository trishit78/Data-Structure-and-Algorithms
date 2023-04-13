#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[10] = {1, 5, 7, 9, 3, 54, 67, 87, 32, 10};

    cout << "The Pivot is at index - " << getPivot(arr, 10) << endl;
}

// the ans is coming index 9