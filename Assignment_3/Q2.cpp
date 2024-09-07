//Write a program to find the sum of all elements in an array using recursion

#include <iostream>
using namespace std;
int sumArray(int arr[], int n) {
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int totalSum = sumArray(arr, n);
    cout<< totalSum << endl;

    return 0;
}
