//Q3)You have a sorted array of infinite numbers, how would you search an element in the array?

//answer-->in such case we cannot directly apply binary search since size is not defined so we can find the appropriate range and the apply the binary search.


//Q4)You are given an m x n integer matrix matrix with the following two properties: 
//Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise./


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
    int target ;
    cout<<"enter target:";
    cin>>target;
    bool found = false;

    int l = 0, h= m * n - 1; 
    // Binary search
    while (l<= h) {
        int mid = l + (h - l) / 2;
        int midElement = arr[mid / n][mid % n]; // Convert mid to 2D index

        if (midElement == target) {
            found = true;
            break;
        } else if (midElement < target) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    if (found) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
