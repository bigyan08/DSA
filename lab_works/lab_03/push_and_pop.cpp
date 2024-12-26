#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> n;

    n.push(10);
    n.push(20);
    n.push(30);

    cout<<"Top element after 3 pushes:"<<n.top()<<endl;
    n.pop();

    cout<<"Top element after 1 pop:"<<n.top()<<endl;
    n.pop();

    cout<<"Top element after 2 pops:"<<n.top()<<endl;
    n.pop();

    if(n.empty()){
        cout<<"Empty stack"<<endl;
    }

    return 0;
}