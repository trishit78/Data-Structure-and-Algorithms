#include<iostream> 
using namespace std;

int getSum(int* arr,int n){
    if(n==0)
    return 0;

    if(n==1)
    return arr[0];


    return arr[0]+getSum(arr+1,n-1);
}

int main(){
    int arr[10]= {1,3,4,6,78,8,5,0,3,21};
    int n=10;

    int ans= getSum(arr,n);
    cout<<"Answer is "<<ans<<endl;
}