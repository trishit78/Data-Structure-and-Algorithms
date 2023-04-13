#include<iostream> 
using namespace std;


// 3 4 5 6 2 1

int partition(int arr[], int s,int e){

    int pivot=arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
        cnt++;
        
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

    if(i<pivotIndex && j>pivotIndex)
    swap(arr[i],arr[j]);

    }
    return pivotIndex;
}


void quickSort(int arr[], int s, int e){
        if(s>=e)
    return;

int p=partition(arr,s, e);

quickSort(arr,s,p-1);
quickSort(arr,p+1,e);

}

int main(){
    // int n;
    // cin>>n;

    // int* arr= new int[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // } 

  int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;
    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}
