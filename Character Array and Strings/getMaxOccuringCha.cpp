#include <iostream>
using namespace std;

char getMaxOccuringCharacter(string s)
{

    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';

        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        char finalAns = 'a' + ans;
        return finalAns;
    }
}

int main()
{
    string s;
    cout << "Enter the string: " << endl;
    cin >> s;
    cout << "The Maximum character is :" << getMaxOccuringCharacter(s) << endl;
}

// Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

// Example 1:

// Input:
// str = testsample
// Output: e
// Explanation: e is the character which
// is having the highest frequency.
// Example 2:

// Input:
// str = output
// Output: t
// Explanation:  t and u are the characters
// with the same frequency, but t is
// lexicographically smaller.
// Your Task:
// The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).
// Note: N = |s|

// Constraints:
// 1 ≤ |s| ≤ 100