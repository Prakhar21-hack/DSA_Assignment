#include <iostream>
using namespace std;

int *q;
int n;
int f=-1, r=-1;

bool emptyQ()
{
    return (f==-1 && r==-1);
}

bool fullQ()
{
    return ((r+1)%n==f);
}

void insertQ(int val)
{
    if (fullQ())
    {
        cout<<"Queue is Full!"<<endl;
        return;
    }
    if (emptyQ())
    {
        f=r=0;
    }
    else
    {
        r=(r+1)%n;
    }
    q[r]=val;
    cout<<val<<" inserted into queue"<<endl;
}

void removeQ()
{
    if (emptyQ())
    {
        cout<<"Queue is Empty!"<<endl;
        return;
    }
    cout<<q[f]<<" removed from queue"<<endl;
    if (f==r)
    {
        f=r=-1;
    }
    else
    {
        f=(f+1)%n;
    }
}

void frontQ()
{
    if (emptyQ())
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else
    {
        cout<<"Front element is: "<<q[f]<<endl;
    }
}

void showQ()
{
    if (emptyQ())
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else
    {
        cout<<"Queue elements: ";
        int i=f;
        while (true) {
            cout<<q[i]<<" ";
            if (i==r) break;
            i=(i+1)%n;
        }
        cout<<endl;
    }
}

int main()
{
    int ch, val;
    cout<<"Enter size of queue: ";
    cin>>n;
    q=new int[n];
    do {
        cout<<"Circular Queue Menu\n";
        cout<<"1. Enqueue\n";
        cout<<"2. Dequeue\n";
        cout<<"3. Peek\n";
        cout<<"4. Display\n";
        cout<<"5. Check if Empty\n";
        cout<<"6. Check if Full\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch) {
        case 1:
            cout<<"Enter number to insert: ";
            cin>>val;
            insertQ(val);
            break;
        case 2:
            removeQ();
            break;
        case 3:
            frontQ();
            break;
        case 4:
            showQ();
            break;
        case 5:
            if (emptyQ())
                cout<<"Queue is Empty!"<<endl;
            else
                cout<<"Queue is NOT Empty!"<<endl;
            break;
        case 6:
            if (fullQ())
                cout<<"Queue is Full!"<<endl;
            else
                cout<<"Queue is NOT Full!"<<endl;
            break;
        case 7:
            cout<<"Exited"<<endl;
            break;
        default:
            cout<<"Invalid choice, try again!"<<endl;
        }
    } while (ch!=7);

    delete[] q;
    return 0;
}
