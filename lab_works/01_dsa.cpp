#include<iostream>

using namespace std;

int main(){
    int n,arr[100];

    cout<<"enter size of the array:(max 100)";
    cin>>n;

    //creating a list
    for(int i=0;i<n;i++){
        cout<<"enter value:";
        cin>>arr[i];
    }

    //taking new value and position
    int new_val,pos;
    cout<<"enter new value and position";
    cin>>new_val>>pos;

    // doing the insertion opertion
    for(int i=n;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = new_val;
    n++;

    //displaying the list
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";   
    }
    cout<<endl;

    return 0;
}