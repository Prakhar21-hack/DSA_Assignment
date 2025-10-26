#include <iostream>
using namespace std;
int main(){
    int size, index;
    
    cout << "Enter size of Diagonal Matrix n: ";
    cin >> size;
    int diagonalMatrix[size][size];
    cout << "Enter the " << size << "x" << size << " diagonal matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cin >> diagonalMatrix[row][col];
        }
    }
    cout << "Input Matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cout << diagonalMatrix[row][col] << " ";
        }
        cout << "\n";
    }
    int diagonalElements[size];
    for(int i=0; i<size; i++){
        diagonalElements[i] = diagonalMatrix[i][i];
    }
    cout << "Linear storage (Diagonal): ";
    for(int i=0; i<size; i++){
        cout << diagonalElements[i] << " ";
    }
    cout << "\n\n";

    cout << "Enter size of Tri-diagonal Matrix n: ";
    cin >> size;
    int triDiagonalMatrix[size][size];
    cout << "Enter the " << size << "x" << size << " matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cin >> triDiagonalMatrix[row][col];
        } 
    }
    cout << "Input Matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cout << triDiagonalMatrix[row][col] << " ";
        }
        cout << "\n";
    }
    int triLinear[3*size - 2];
    index=0;
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            if(row == col || row == col+1 || col == row+1){
                triLinear[index++] = triDiagonalMatrix[row][col];
            }
        }
    }
    cout << "Linear storage (Tri-diagonal): ";
    for(int i=0; i<3*size-2; i++) cout << triLinear[i] << " ";
    cout << "\n\n";

    cout << "Enter size of Lower Triangular Matrix n: ";
    cin >> size;
    int lowerTriMatrix[size][size];
    cout << "Enter the " << size << "x" << size << " matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cin >> lowerTriMatrix[row][col];
        } 
    }
    cout << "Input Matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cout << lowerTriMatrix[row][col] << " ";
        }
        cout << "\n";
    }
    int lowerLinear[size*(size+1)/2];
    index=0;
    for(int row=0; row<size; row++){
        for(int col=0; col<=row; col++){
            lowerLinear[index++] = lowerTriMatrix[row][col];
        } 
    }
    cout << "Linear storage (Lower Triangular): ";
    for(int i=0; i<size*(size+1)/2; i++){
        cout << lowerLinear[i] << " ";
    }
    cout << "\n\n";

    cout << "Enter size of Upper Triangular Matrix n: ";
    cin >> size;
    int upperTriMatrix[size][size];
    cout << "Enter the " << size << "x" << size << " matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cin >> upperTriMatrix[row][col];
        }
    }
    cout << "Input Matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cout << upperTriMatrix[row][col] << " ";
        }
        cout << "\n";
    }
    int upperLinear[size*(size+1)/2];
    index=0;
    for(int row=0; row<size; row++){
        for(int col=row; col<size; col++){
            upperLinear[index++] = upperTriMatrix[row][col];
        }
    }
    cout << "Linear storage (Upper Triangular): ";
    for(int i=0; i<size*(size+1)/2; i++){
        cout << upperLinear[i] << " ";
    }
    cout << "\n\n";

    cout << "Enter size of Symmetric Matrix n: ";
    cin >> size;
    int symmetricMatrix[size][size];
    cout << "Enter the " << size << "x" << size << " matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cin >> symmetricMatrix[row][col];
        }
    }
    cout << "Input Matrix:\n";
    for(int row=0; row<size; row++){
        for(int col=0; col<size; col++){
            cout << symmetricMatrix[row][col] << " ";
        }
        cout << "\n";
    }
    int symmetricLinear[size*(size+1)/2];
    index=0;
    for(int row=0; row<size; row++){
        for(int col=0; col<=row; col++){
            symmetricLinear[index++] = symmetricMatrix[row][col];
        }
    }
    cout << "Linear storage (Symmetric): ";
    for(int i=0; i<size*(size+1)/2; i++){
        cout << symmetricLinear[i] << " ";
    }
    cout << "\n";

    return 0;
}
