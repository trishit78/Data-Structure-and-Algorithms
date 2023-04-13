#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        /* code */
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[10] = {4, 5, 7, 9, 3, 54, 67, 87, 32, 10};
    cout << "Enter The Key to search for:" << endl;
    int key;
    // cin >> key;
    int ans = binarySearch(arr, 10, 32);
    cout << "after binary search the key is at Index" << ans << endl;
}
