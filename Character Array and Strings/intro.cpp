#include <iostream>
using namespace std;

int main()
{

    char ch[20];

    cout << "enter your name" << endl;
    cin >> ch;
    cin.get(ch, 20);

    cout << "Your name is ";
    cout << ch << endl;

    return 0;
}