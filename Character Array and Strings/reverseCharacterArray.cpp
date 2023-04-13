#include <iostream>
using namespace std;

void reverse(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    int n = count;
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char ch[20];

    cout << "enter your name" << endl;
    cin >> ch;
    // cin.get(ch, 20); // takes space as a length  TRishit bhowmik is 15

    cout << "Your name is ";
    cout << ch << endl;

    reverse(ch);
    cout << "Your name is ";
    cout << ch << endl;
    // cout << "Reverse is " << reverse(ch) << endl;
    return 0;
}