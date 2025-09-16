#include <iostream>
using namespace std;

int *q;
int N;
int f=-1, r=-1;

bool emptyQ()
{
    return (f==-1 && r==-1);
}

bool fullQ()
{
    return (r==N-1);
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
        f=0;
    }
    r++;
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
        f++;
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
        for (int i=f; i<=r; i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int ch, val;
    cout<<"Enter size of queue: ";
    cin>>N;
    q=new int[N];

    do
    {
        cout<<"Queue Menu\n";
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
