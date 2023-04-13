#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    // row wise print
    int arr[3][4];

    cout << "Enter the input:- " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    int target;
    cout << "Enter the Target:- " << endl;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Target found" << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }

    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12