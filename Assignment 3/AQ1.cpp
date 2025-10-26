#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    int choice;
    int value;
    while (true){
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Is Empty\n";
        cout << "4. Is Full\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << value << " pushed into stack\n";
                break;
            case 2:
                if (s.empty()){
                    cout << "Stack Underflow\n";
                } 
                else{
                    cout << s.top() << " popped from stack\n";
                    s.pop();
                }
                break;
            case 3:
                cout << (s.empty() ? "Stack is empty\n" : "Stack is not empty\n");
                break;
            case 4:
                cout << "Stack can expand; it is not full\n";
                break;
            case 5:
                if (s.empty()){
                    cout << "Stack is empty\n";
                } 
                else{
                    stack<int> temp = s;
                    cout << "Stack elements: ";
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;
            case 6:
                if (s.empty()){
                    cout << "Stack is empty\n";
                } 
                else{
                    cout << "Top element: " << s.top() << endl;
                }
                break;
            case 7:
                return 0;
        }
    }
    return 0;
}
