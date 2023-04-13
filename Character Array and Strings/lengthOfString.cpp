#include <iostream>
using namespace std;

int length(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char ch[20];

    cout << "enter your name" << endl;
    // cin >> ch;
    cin.get(ch, 20); // takes space as a length  TRishit bhowmik is 15

    cout << "Your name is ";
    cout << ch << endl;

    cout << "Length is " << length(ch) << endl;
    return 0;
}