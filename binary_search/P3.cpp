//Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.
#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"enter row:";
    cin>>n;
    cout<<"enetr column:";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int rowOnes = -1;
    int maxOnes = -1;
    int j = m - 1; 
    
    for (int i = 0; i < n; i++) {
        while (j >= 0 && arr[i][j] == 1) {
            j--; 
            rowOnes = i;
        }
    }

    cout << rowOnes;
    
    return 0;
}
