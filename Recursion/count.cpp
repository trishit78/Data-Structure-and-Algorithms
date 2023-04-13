#include<iostream> 
using namespace std;

void count(int n){
    if(n==0)
    return;

    count(n-1);  // 1 - 10

    cout<<n<<endl;

   // count(n-1);   // 10 - 1
}

int main(){
    int n;
    cin>>n;

     count(n);
    
    return 0;
}