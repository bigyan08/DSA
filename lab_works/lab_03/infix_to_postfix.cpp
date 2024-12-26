#include<iostream>
#include<stack>
#include<string>
using namespace std;

// higher precedence is 2 and lower precedance is 1 and default is 0 for paranthesis or operands
int precedence(char op){
    if(op == '+' || op =='-'){
        return 1;
    }
    else if(op == '/' || op =='*'){
        return 2;
    }
    else{
        return 0;
    }
}

// function to check of the character is operator
bool isOp(char c){
    return (c == '+' || c == '-'|| c == '/'|| c == '*');

}

// conversion function
string infixToPostfix(string exp){
    stack<char> s;
    string result;

    for (char c:exp){ // range based looping that iterates over each character in string exp.

            if(isalnum(c)){ //isalnum() is a predefined function in c++ that checks if the character is either alphabet or number. If yes then true else false.
                result += c;
            }

            else if( c == '('){
                s.push(c);
            }

            else if (c == ')'){
                while(s.top() != '('){
                    result += s.top();
                    s.pop();
                }
                s.pop();
            }

            else if (isOp(c)){
                while(!s.empty() && (precedence(s.top()) >= precedence(c))){ // if the stack is not empty and the predence of the char of top of stack is greater than or equal to predence of current operator
                    result += s.top();
                    s.pop();
                }
                s.push(c); //pushing the current operator onto the stack
            }
    }

    // popping the remaining operators from the stack
    while(!s.empty()){
        result += s.top();
        s.pop();
    }

    return result;
}
int main(){
    string exp;

    cout<<"Enter infix expression:"<<endl;
    cin>>exp;

    cout<<"Postfix expression is:"<<infixToPostfix(exp)<<endl;

    return 0;
}

