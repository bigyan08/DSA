#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

string InfixToPrefix(stack<char> s,string infix) // s object of character type, infix argument of string type
{
    string prefix; //store the changes to infix in this prefix string
    reverse(infix.begin(),infix.end()); // predefined function that takes two points as arguments and reverses them.

    for(int i=0; i<infix.length();i++)
    {
        if(infix[i]=='(')
        {
            infix[i]=')';
        }
        else if(infix[i]==')')
        {
            infix[i] = '(';
        }
    }

    for(int i=0;i<infix.length();i++)
    {
        if((infix[i] >= 'a' && infix[i] <= 'z')|| (infix[i] >= 'A' && infix[i] <= 'Z')){
            prefix+=infix[i];
        }
        else if(infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while((s.top()!='(') && (!s.empty())){
                prefix += s.top();
                s.pop();
            }
            if(s.top()=='(')
            {
                s.pop();
            }
        }
        else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^' )
        {
            
        }
    }



}
int main(){
    
    string infix, prefix;
    cout<<"Enter Infix Expression:"<<endl;
    cin>>infix;

    stack <char> stack; // this gives FILO behaviour

    cout<<"Infix Expression:"<<infix<<endl;

    prefix = InfixToPrefix(stack, infix);
    cout<<endl<<"Prefix Expression:"<<prefix;

    return 0;


}