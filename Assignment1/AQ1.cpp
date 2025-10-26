#include <iostream>
using namespace std;

int main() {
    int arr[100], size = 0, choice = 0, pos, value, key, found;

    while(choice != 6) {
        cout << "MENU\n";
        cout << "1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter number of elements:";
            cin >> size;
            if(size > 100) {
                cout << "Maximum is 100";
                size = 100;
            }
            cout << "Enter elements:";
            for(int i = 0; i < size; ++i)
                cin >> arr[i];
        }
        else if(choice == 2) {
            if(size == 0)
                cout << "Array is empty";
            else {
                cout << "Array elements: ";
                for(int i = 0; i < size; ++i)
                    cout << arr[i] << " ";
                cout << endl;
            }
        }
        else if(choice == 3) {
            if(size == 100) {
                cout << "Array is full. Cannot insert";
            }
            else {
                cout << "Enter posi: ";
                cin >> pos;
                if(pos < 0 || pos > size) {
                    cout << "Invalid position";
                }
                else {
                    cout << "Enter value to insert: ";
                    cin >> value;
                    for(int i = size; i > pos; --i)
                        arr[i] = arr[i-1];
                    arr[pos] = value;
                    ++size;
                    cout << "Element inserted";
                }
            }
        }
        else if(choice == 4){
            if(size == 0) {
                cout << "Array is empty";
            }
            else {
                cout << "Enter posi: ";
                cin >> pos;
                if(pos < 0 || pos >= size) {
                    cout << "Invalid posi";
                }
                else {
                    for(int i = pos; i < size-1; ++i)
                        arr[i] = arr[i+1];
                    --size;
                    cout << "Element deleted";
                }
            }
        }
        else if(choice == 5) {
            if(size == 0) {
                cout << "Array is empty";
            }
            else {
                cout << "Enter element to search: ";
                cin >> key;
                found = -1;
                for(int i = 0; i < size; ++i) {
                    if(arr[i] == key) {
                        found = i;
                        break;
                    }
                }
                if(found != -1)
                    cout << "Element found at index " << found << "\n";
                else
                    cout << "Element not found";
            }
        }
        else if(choice == 6) {
            cout << "Exit";
        }
        else {
            cout << "Invalid choice";
        }
    }

    return 0;
}
