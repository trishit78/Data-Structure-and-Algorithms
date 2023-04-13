#include<iostream> 
using namespace std;


bool isSorted(int n,int* arr){

if(n==0 || n==1)
return true;

if(arr[0]>arr[1])
return false;
else
return isSorted(n-1,arr+1);

}

int main(){
    // int n;
    // cin>>n;

    // int* arr = new int [n];

    // for(int i=0;i<n;i++){
    //     cin>>n;
    // }

    //int arr[10]= {1,3,4,6,78,8,5,0,3,21};
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    

    bool ans = isSorted(10,arr);

    if(ans)
    cout<<"sorted"<<endl;
    else
    cout<<"not sorted"<<endl;
}