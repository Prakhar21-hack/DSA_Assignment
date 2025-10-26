#include <iostream>
#include <stack>
using namespace std;
int main() {
    string expression;
    cout << "Enter expression: ";
    cin >> expression;
    stack<char> s;
    bool isBalanced=true;
    for (char symbol : expression){
        if(symbol == '(' || symbol == '{' || symbol == '['){
            s.push(symbol);
        } 
        else if(symbol == ')' || symbol == '}' || symbol == ']'){
            if(s.empty()){
                isBalanced = false;
                break;
            }
            char topChar = s.top();
            s.pop();
            if ((symbol == ')' && topChar != '(') || (symbol == '}' && topChar != '{') || (symbol == ']' && topChar != '[')){
                isBalanced = false;
                break;
            }
        }
    }
    if(!s.empty()){
        isBalanced = false;
    }
    if(isBalanced){
        cout << "Balanced";
    } 
    else{
        cout << "Not Balanced";
    }
    return 0;
}
