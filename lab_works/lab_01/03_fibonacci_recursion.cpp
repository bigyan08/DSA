#include<iostream>
using namespace std;

int fib(int n){
    if (n<=1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cout<<fib(i)<<" ";
    }
    cout<<"\n";
    return 0;
}