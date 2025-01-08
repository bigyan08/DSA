#include<iostream>
using namespace std;

int main(){
int array_size,i;
int lasting_duration;


cout<<"enter size and ink lasting duration:"<<endl;
cin>>array_size>>lasting_duration;

int arr[array_size];

cout<<"Enter array elements(timestamps):"<<endl;
for(i=0;i<array_size;i++)
{
    cout<<"enter value:";
    cin>>arr[i];
}

int rem_dur,c=1;
int current_ink_end_time;
for(i=0;i<array_size;i++)
{
    current_ink_end_time=lasting_duration-arr[i];

    if(!(current_ink_end_time - (arr[i+1]-arr[i])>=0))
    {
        current_ink_end_time +=lasting_duration;
        c++;
    }
}
cout<<"No. of stamps:"<<c<<endl;
return 0;
}