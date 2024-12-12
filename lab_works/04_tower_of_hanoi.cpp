#include<iostream>
using namespace std;

void TOH(int n, char src, char aux, char dest){
    // if the no. of disk is 1 then directly move the disk from src to dest
    if(n==1){
        cout<<"Move disk - "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    TOH(n-1,src,dest,aux);
    cout<<"Move disk - "<<n<<" from "<<src<<" to "<<dest<<endl;
    TOH(n-1,aux,src,dest);
}

int main(){
    int n;
    cout<<"enter no. of disk"<<endl;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}