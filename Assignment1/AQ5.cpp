#include <iostream>
using namespace std;

int main(){
    int r1,c1;
    cout<<"Enter number of rows and columns:";
    cin>>r1>>c1;
    int a1[r1][c1];
    cout<<"Enter elements of the matrix:";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++) cin>>a1[i][j];

    cout<<"Matrix:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++) cout<<a1[i][j]<<" ";
        cout<<"\n";
    }

    cout<<"Sum of each row:";
    for(int i=0;i<r1;i++){
        int s=0;
        for(int j=0;j<c1;j++) s+=a1[i][j];
        cout<<"Row "<<i+1<<": "<<s<<"\n";
    }

    cout<<"Sum of each column:";
    for(int j=0;j<c1;j++){
        int s=0;
        for(int i=0;i<r1;i++) s+=a1[i][j];
        cout<<"Column "<<j+1<<": "<<s<<"\n";
    }
    return 0;
}
