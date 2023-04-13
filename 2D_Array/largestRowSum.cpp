#include <iostream>
using namespace std;

void largestRowSum(int arr[][4], int m, int n)
{

    int max = -1;

    int sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
    }

    if (sum > max)
        max = sum;

    cout << "The largest Row Sum is :- " << max << endl;
}

int main()
{

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    largestRowSum(arr, 3, 4);

    return 0;
}