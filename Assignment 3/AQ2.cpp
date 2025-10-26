#include <iostream>
#include <stack>
using namespace std;
int main(){
    char arr[100];
    stack<char> s;
    cout << "Enter string: ";
    cin >> arr;
    int i=0;
    while(arr[i]!='\0'){
        s.push(arr[i]);
        i++;
    }
    cout << "Reversed string: ";
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}
