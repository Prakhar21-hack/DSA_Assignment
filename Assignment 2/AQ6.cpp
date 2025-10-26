#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "1:Transpose \n2:Addition \n3:Multiplication \n";
    cin >> k ;
    if(k==1){
        int m,n;
        cout << "enter dimentions of matrix : "  ;
        cin >> m >> n ;
        int A[m][n];
        cout << "enter elements of the matrix : " << endl ;
        for(int i=0 ; i<m ; i++){
                for(int j=0 ; j<n ; j++){
                    cin >> A[i][j];
                }
            }
        int size = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(A[i][j] != 0){
                    size=size+1;
                }
            }
        }
        int sp[size][3];
        int row = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(A[i][j] != 0){
                    sp[row][0]=i;
                    sp[row][1]=j;
                    sp[row][2]=A[i][j];
                    row=row+1;
                }
            }
        }
        cout << "sparse matrix is : " << endl;
        for(int i=0 ; i<row ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << sp[i][j] << "  " ;
            }
            cout << endl;
        }
        int tp[size][3];
        for(int i=0; i<size; i++){
            tp[i][0] = sp[i][1];
            tp[i][1] = sp[i][0];
            tp[i][2] = sp[i][2];
        }
        cout << "Transpose of sparse matrix is : " << endl;
        for(int i=0; i<size; i++){
            for(int j=0; j<3; j++){
                cout << tp[i][j] << "  ";
            }
            cout << endl;
        }
    }
    if(k==2){
        int m,n;
        cout << "enter dimentions of matrix : "  ;
        cin >> m >> n ;
        int A[m][n] , B[m][n];
        cout << "enter elements of the 1st matrix : " << endl ;
        for(int i=0 ; i<m ; i++){
                for(int j=0 ; j<n ; j++){
                    cin >> A[i][j];
                }
            }
        cout << "enter elements of the 2nd matrix : " << endl ;
        for(int i=0 ; i<m ; i++){
                for(int j=0 ; j<n ; j++){
                    cin >> B[i][j];
                }
            }
        int sizeA = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(A[i][j] != 0){
                    sizeA=sizeA+1;
                }
            }
        }
        int sizeB = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(B[i][j] != 0){
                    sizeB=sizeB+1;
                }
            }
        }
        int spA[sizeA][3];
        int rowA = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(A[i][j] != 0){
                    spA[rowA][0]=i;
                    spA[rowA][1]=j;
                    spA[rowA][2]=A[i][j];
                    rowA=rowA+1;
                }
            }
        }
        int spB[sizeB][3];
        int rowB = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(B[i][j] != 0){
                    spB[rowB][0]=i;
                    spB[rowB][1]=j;
                    spB[rowB][2]=B[i][j];
                    rowB=rowB+1;
                }
            }
        }
        cout << "sparse matrix 1 is : " << endl;
        for(int i=0 ; i<rowA ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << spA[i][j] << "  " ;
            }
            cout << endl;
        }
        cout << "sparse matrix 2 is : " << endl;
        for(int i=0 ; i<rowB ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << spB[i][j] << "  " ;
            }
            cout << endl;
        }
        int spSum[sizeA + sizeB][3];
        int i=0, j=0, k=0;    
        while(i < sizeA && j < sizeB) {
            if(spA[i][0] < spB[j][0] || (spA[i][0] == spB[j][0] && spA[i][1] < spB[j][1])) {
                for(int l=0; l<3; l++)
                    spSum[k][l] = spA[i][l];
                i++; k++;
            }
            else if(spA[i][0] > spB[j][0] || (spA[i][0] == spB[j][0] && spA[i][1] > spB[j][1])) {
                for(int l=0; l<3; l++)
                    spSum[k][l] = spB[j][l];
                j++; k++;
            }
            else {
                int sum = spA[i][2] + spB[j][2];
                if(sum != 0) {
                    spSum[k][0] = spA[i][0];
                    spSum[k][1] = spA[i][1];
                    spSum[k][2] = sum;
                    k++;
                }
                i++; j++;
            }
        }
        while(i < sizeA) {
            for(int l=0; l<3; l++)
                spSum[k][l] = spA[i][l];
            i++; k++;
        }
        while(j < sizeB) {
            for(int l=0; l<3; l++)
                spSum[k][l] = spB[j][l];
            j++; k++;
        }
    
        cout << "Sum of sparse matrices (row, col, value):" << endl;
        for(int x=0; x<k; x++) {
            cout << spSum[x][0] << " " << spSum[x][1] << " " << spSum[x][2] << endl;
        }
    }
    if(k==3){
        int m,n;
        cout << "enter dimentions of matrix : "  ;
        cin >> m >> n ;
        int A[m][n] , B[m][n];
        cout << "enter elements of the 1st matrix : " << endl ;
        for(int i=0 ; i<m ; i++){
                for(int j=0 ; j<n ; j++){
                    cin >> A[i][j];
                }
            }
        cout << "enter elements of the 2nd matrix : " << endl ;
        for(int i=0 ; i<m ; i++){
                for(int j=0 ; j<n ; j++){
                    cin >> B[i][j];
                }
            }
        int sizeA = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(A[i][j] != 0){
                    sizeA=sizeA+1;
                }
            }
        }
        int sizeB = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(B[i][j] != 0){
                    sizeB=sizeB+1;
                }
            }
        }
        int spA[sizeA][3];
        int rowA = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(A[i][j] != 0){
                    spA[rowA][0]=i;
                    spA[rowA][1]=j;
                    spA[rowA][2]=A[i][j];
                    rowA=rowA+1;
                }
            }
        }
        int spB[sizeB][3];
        int rowB = 0;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(B[i][j] != 0){
                    spB[rowB][0]=i;
                    spB[rowB][1]=j;
                    spB[rowB][2]=B[i][j];
                    rowB=rowB+1;
                }
            }
        }
        cout << "sparse matrix 1 is : " << endl;
        for(int i=0 ; i<rowA ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << spA[i][j] << "  " ;
            }
            cout << endl;
        }
        cout << "sparse matrix 2 is : " << endl;
        for(int i=0 ; i<rowB ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << spB[i][j] << "  " ;
            }
            cout << endl;
        }
        int spMul[(sizeA < sizeB ? sizeA : sizeB)][3];
        int kMul=0;
        for(int i=0; i<sizeA; i++){
            for(int j=0; j<sizeB; j++){
                if(spA[i][0] == spB[j][0] && spA[i][1] == spB[j][1]){
                    int val = spA[i][2] * spB[j][2];
                    if(val != 0){
                        spMul[kMul][0] = spA[i][0];
                        spMul[kMul][1] = spA[i][1];
                        spMul[kMul][2] = val;
                        kMul++;
                    }
                    break;
                }
            }
        }
        cout << "product of sparse matrices (row, col, value):" << endl;
        for(int i=0; i<kMul; i++){
            cout << spMul[i][0] << " " << spMul[i][1] << " " << spMul[i][2] << endl;
        }
    }
    return 0;
}