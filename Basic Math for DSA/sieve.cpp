#include <iostream>
using namespace std;

void sieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                prime[j] = i;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
        // cout << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    sieve(n);
}