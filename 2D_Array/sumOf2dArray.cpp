#include <iostream>
using namespace std;

void printSum(int arr[][4], int m, int n)
{
    // row wise sum
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << "The total is " << sum << endl;
    }
}
void printColSum(int arr[][4], int m, int n)
{
    // col wise sum
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += arr[i][j];
        }
        cout << "The total is " << sum << endl;
    }
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

    printColSum(arr, 3, 4);

    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12