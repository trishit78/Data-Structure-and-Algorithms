#include<iostream> 
using namespace std;

void isSorted(int* arr, int n){
    int s=0;
    int e=n-1;

    if(s>e)
    return ;


    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    isSorted(arr,n-1);

}


int main(){
    int arr[5]={2,5,4,8,1};
    int n=5;

    isSorted(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}