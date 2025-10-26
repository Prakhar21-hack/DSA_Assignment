#include <iostream>
#include <stack>
#include <string>
using namespace std;
int precedence(char op) {
    if (op == '+' || op == '-'){
        return 1;
    } 
    if (op == '*' || op == '/'){
        return 2;
    }
    return 0;
}
int main(){
    string infixExp;
    cout << "Enter the infix expression: ";
    cin >> infixExp;
    stack<char> s;
    string postfixExp = "";
    for(size_t i = 0; i < infixExp.length(); i++){
        char ch = infixExp[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfixExp += ch;
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfixExp += s.top();
                s.pop();
            }
            if (!s.empty()) {
                s.pop();
            }
        }
        else {
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfixExp += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()) {
        postfixExp += s.top();
        s.pop();
    }
    cout << "Postfix expression: " << postfixExp << endl;
    return 0;
}
