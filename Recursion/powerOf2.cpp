#include<iostream> 
using namespace std;


int power(int n){
    if(n==0)
    return 1;

    int ans = power(n-1);
    return 2*ans;
}

int main(){
    int n;
    cin>>n;

    int ans= power(n);

    cout<<"Answer is "<<ans<<endl;
}