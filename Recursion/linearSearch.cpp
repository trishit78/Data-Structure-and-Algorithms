#include<iostream> 
using namespace std;


bool linearSearch(int* arr,int n,int k){
    if(n==0)
    return false;

    if(arr[0]==k)
    return true;
    else{
        return linearSearch(arr+1,n-1,k);
    }
}

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=0;

    bool ans = linearSearch(arr,n,k);

    if(ans)
    cout<<"Here"<<endl;
    else
    cout<<"Not Here"<<endl;
}