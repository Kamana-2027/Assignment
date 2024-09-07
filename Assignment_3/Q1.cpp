//Write a program to find the minimum element of an array using recursionC

#include <iostream>
using namespace std;
int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int minRest = findMin(arr, n - 1);
    return min(arr[n - 1], minRest);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minimum = findMin(arr, n);
    cout<< minimum << endl;

    return 0;
}
