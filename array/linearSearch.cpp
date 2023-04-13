#include <iostream>
using namespace std;
bool search(int array[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            return true;
            cout << "i am here" << endl;
        }
        // else
        // {
        //     return 0;
        // }
    }
}
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout << "Enter The Key to search for:" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is here" << endl;
    }
    else
    {
        cout << "key is not here" << endl;
    }
    return 0;
}