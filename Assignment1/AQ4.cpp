#include <iostream>
using namespace std;

int main(){
    int n; cout<<"Enter size of array:";
    cin>>n; int a1[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) cin>>a1[i];

    cout<<"Original Array:\n";
    for(int i=0;i<n;i++) cout<<a1[i]<<" ";
    cout<<"\n";

    for(int i=0;i<n/2;i++) {
        int t=a1[i];
        a1[i]=a1[n-1-i];
        a1[n-1-i]=t;
    }

    cout<<"Array after reversing:\n";
    for(int i=0;i<n;i++) cout<<a1[i]<<" ";
    cout<<"\n\n";

    int r1,c1,r2,c2;
    cout<<"Enter rows and cols of first matrix:";
    cin>>r1>>c1;
    cout<<"Enter rows and cols of second matrix:";
    cin>>r2>>c2;

    if(c1!=r2) cout<<"Matrix multiplication not possible!\n\n";
    else {
        int A[r1][c1],B[r2][c2],C[r1][c2];
        cout<<"Enter elements of first matrix:\n";
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++) cin>>A[i][j];
        cout<<"First Matrix:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++) cout<<A[i][j]<<" ";
            cout<<"\n";
        }

        cout<<"Enter elements of second matrix:\n";
        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++) cin>>B[i][j];
        cout<<"Second Matrix:\n";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++) cout<<B[i][j]<<" ";
            cout<<"\n";
        }

        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++) C[i][j]=0;
        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++)
                for(int k=0;k<c1;k++)
                    C[i][j]+=A[i][k]*B[k][j];

        cout<<"Result of multiplication:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++) cout<<C[i][j]<<" ";
            cout<<"\n";
        }
        cout<<"\n";
    }

    int r,c;
    cout<<"Enter rows and cols of matrix:";
    cin>>r>>c;
    int M[r][c];
    cout<<"Enter elements of matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) cin>>M[i][j];

    cout<<"Original Matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout<<M[i][j]<<" ";
        cout<<"\n";
    }

    if(r==c){
        for(int i=0;i<r;i++)
            for(int j=i+1;j<c;j++){
                int t=M[i][j];
                M[i][j]=M[j][i];
                M[j][i]=t;
            }
        cout<<"Transpose of matrix:\n";
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++) cout<<M[i][j]<<" ";
            cout<<"\n";
        }
    }
    else{
        int T[c][r];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++) T[j][i]=M[i][j];
        cout<<"Transpose of matrix:\n";
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++) cout<<T[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
