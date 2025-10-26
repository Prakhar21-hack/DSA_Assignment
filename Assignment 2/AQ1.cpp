#include <iostream>
using namespace std;

int main()
{
    int size, target;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements in sorted order: ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> target;
    int left=0, right=size-1, mid, foundIndex=-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==target)
        {
            foundIndex=mid;
            break;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    if(foundIndex!=-1)
    {
        cout << "Element found at index " << foundIndex << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}
