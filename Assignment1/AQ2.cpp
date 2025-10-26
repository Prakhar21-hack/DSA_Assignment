#include <iostream>
using namespace std;

int main() 
{
    int n1;
    cout << "Enter number of elements: ";
    cin >> n1;
    int a1[n1];

    cout << "Enter " << n1 << " elements:";
    for(int i=0; i<n1; i++) 
    {
        cin >> a1[i];
    }

    for(int i=0; i<n1; i++) 
    {
        for(int j=i+1; j<n1; j++) 
        {
            if(a1[i]==a1[j]) 
            {
                for(int k=j; k<n1-1; k++) 
                {
                    a1[k] = a1[k + 1];
                }
                n1--;
                j--;
            }
        }
    }
    cout << "Array after removing duplicates:";
    for(int i=0; i<n1; i++) 
    {
        cout << a1[i] << " ";
    }
    cout << endl;

    return 0;
}
