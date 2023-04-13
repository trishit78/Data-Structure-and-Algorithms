#include <iostream>
#include <climits>
// #include <bits/stdc++.h>
using namespace std;

void getMax(int array[], int n)
{

    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, array[i]);
    }

    cout << "MAX is " << maximum << endl;
}

void getMin(int array[], int n)
{

    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        // if (minimum < array[i])
        // {
        //     minimum = array[i];
        // }
        minimum = min(minimum, array[i]);
    }

    cout << "MIN is " << minimum << endl;
}

int main()
{

    int arr[10] = {1, 2, 4, 56, 7, 8, 3, 4, 79, 10};

    getMax(arr, 10);
    getMin(arr, 10);
}