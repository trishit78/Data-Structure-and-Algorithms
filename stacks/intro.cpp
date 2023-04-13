#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(3);
    s.push(8);

    s.pop();

    cout<<"Printing Top Element "<<s.top()<<endl;
}