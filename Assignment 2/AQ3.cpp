#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = 7;
    int missing = -1;
    for(int num=1; num<=size+1; num++){
        bool found=false;
        for(int i=0; i<size; i++){
            if(arr[i] == num){
                found = true;
                break;
            }
        }
        if(!found){
            missing = num;
            break;
        }
    }
    cout << missing << endl;
}
