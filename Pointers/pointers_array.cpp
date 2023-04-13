#include <iostream>
using namespace std;

int main()
{
    /*
        int arr[10] = {23, 122, 41, 67};

        cout << " address of first memory block is " << arr << endl;
        cout << arr[0] << endl;
        cout << " address of first memory block is " << &arr[0] << endl;

        cout << "4th " << *arr << endl;       // value of 0th index
        cout << "5th " << *arr + 1 << endl;   //(value of 0th index) +1
        cout << "6th " << *(arr + 1) << endl; // value of 1st index
        cout << "7th " << *(arr) + 1 << endl; //(value of 0th index) +1
        cout << "8th " << arr[2] << endl;     // value of 3rd position
        cout << "9th " << *(arr + 2) << endl; // value of 3rd position

        int i = 3;
        cout << i[arr] << endl; // value of 4th position in array

        int temp[10] = {1, 2};
        cout << sizeof(temp) << endl; // size of 10 array is 40 bytes
        cout << " 1st " << sizeof(*temp) << endl;
        cout << " 2nd " << sizeof(&temp) << endl; // size of 2 array is 8 bytes

        int *ptr = &temp[0];
        cout << sizeof(ptr) << endl;  // size of pointer's   1st position 1
        cout << sizeof(*ptr) << endl; // size of integer 1 which is 4 bytes
        cout << sizeof(&ptr) << endl; // size of pointer's   1st position 1


    int a[20] = {1, 2, 3, 5};
    cout << " ->" << &a[0] << endl; // address of 0th index of a
    cout << &a << endl;             // address of 0th index of a
    cout << a << endl;              // address of 0th index of a

    int *p = &a[0];
    cout << p << endl;           // address of 0th index of a
    cout << *p << endl;          // value of 0th index of a
    cout << "-> " << &p << endl; // address of pointer p
*/

    int arr[10];

    // ERROR
    // arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl; // address of 0th index of arr
                         // updating address of pointer 0th index +1  actually changing address by 4 bytes
    ptr = ptr + 1;
    cout << ptr << endl; // updated pointer address

    return 0;
}