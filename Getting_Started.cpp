#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
   if(n==0 && m==0){
       return 0;
   }
pair<int,int> p ;
p.first=


	//Write your code here
	int storage[n][m];
        int max_val = INT_MIN;
        for(int i=0;i<n;i++) {

            storage[i][0] = arr[i][0] == 0 ? 1: 0;
            max_val = max(storage[i][0], max_val);
        }

        for(int i=0;i<m;i++) {
            storage[0][i] = arr[0][i] ==0 ? 1: 0;
            max_val = max(storage[0][i], max_val);
        }

        for(int i=1;i<n;i++) {
            for(int j=1;j<m;j++ ) {
                if(arr[i][j]==1){
					storage[i][j] = 0;
                }
                else{
                    storage[i][j] = min(min(storage[i-1][j-1], storage[i-1][j] ), storage[i][j-1]) + 1 ;
                }
                max_val = max(storage[i][j], max_val);
            }
        }
        return max_val;

    }

int main()
{
	int **arr, n, m, i, j;
	cin >> n >> m;
	arr = new int *[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

	delete[] arr;

	return 0;
}
