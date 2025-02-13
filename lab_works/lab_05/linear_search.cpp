#include<iostream>
using namespace std;

int main(){
    int n, arr[10],key;
    cout<<"enter number of elements:"<<endl;
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<"enter value:"<<endl;
        cin>>arr[i];
    }

    cout<<"enter the element to be searched:"<<endl;
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"element not found"<<endl;
}