#include <iostream>
using namespace std;

// time complexity - O(log b)

int fastExpo(int a, int b)
{
    int res = 1;

    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a;
        }
        b = b >> 1;
        a = a * a;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "answer is " << fastExpo(a, b) << endl;
}