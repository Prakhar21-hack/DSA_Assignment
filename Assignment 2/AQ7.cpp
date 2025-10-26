#include <iostream>
using namespace std;
int Inversion_count(int arr[], int n)
{
    int  count = 0;
    for (int i = 0; i < n - 1 ; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k = sizeof(arr) / sizeof(arr[0]);
    int inversions = Inversion_count(arr, k);
    cout << "The number of inversions is: " << inversions << endl;
    return 0;
}