#include<iostream> 
using namespace std;


bool binarySearch(int* arr, int s,int e, int k){
    

    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    if(arr[0]==k)
    return true;

    if(arr[0]<k){
        binarySearch(arr,mid+1,e,k);
    }
    else{
        binarySearch(arr,s,mid-1,k);
    }
}



int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=0;

    int s=0;
    int e=n-1;

    bool ans = binarySearch(arr,s,e,k);

    if(ans)
    cout<<"Here"<<endl;
    else
    cout<<"Not Here"<<endl;
}