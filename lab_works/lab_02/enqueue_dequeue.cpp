#include<iostream>
using namespace std;
#define size 10 // array size
int front=-1,rear=-1; // assigning values to front and rear
int arr[size];

bool isEmpty(){
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else {
        return false;
    }
}

void enqueue(int x){
    if(rear = size-1){ // checking if the array is full
    cout<<"Queue is full"<<endl;
    }
    else if (isEmpty()){
        front = 0;
        rear=0;
        arr[rear] = x;
    }
    else{
        rear++;
        arr[rear]=x;
    }
}

void dequeue(){
    if(isEmpty()){
        return;
    }
    else{
        front++;
    }
}

void displayQueue(){
    for(int i=front;i<=rear;i++)
    {
    cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    enqueue(5);
    enqueue(8);
    enqueue(9);
    enqueue(4);
    displayQueue();
    dequeue();
    dequeue();
    dequeue();
    displayQueue();
    return 0;

}