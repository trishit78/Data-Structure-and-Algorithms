#include <iostream>
using namespace std;

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

    cout << "The Output is:- " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}

// col wise print

// int main()
// {

//     int arr[3][4];

//     cout << "Enter the input:- " << endl;
//     for (int col = 0; col < 4; col++)
//     {
//         for (int row = 0; row < 3; row++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     cout << "The Output is:- " << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }