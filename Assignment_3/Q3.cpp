//$C Write a program to find the index of a given element in an array using recursion. If the element is present, return its index; otherwise, return -1

#include <iostream>
using namespace std;
int findIndex(int arr[], int start, int n, int target) {
    if (start >= n)
        return -1;
    if (arr[start] == target)
        return start;
    return findIndex(arr, start + 1, n, target);
}

int main() {
    int n, target;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    int index = findIndex(arr, 0, n, target);
    if (index != -1)
        cout << "Element " << target << " found at index " << index << "." << endl;
    else
        cout << "Element " << target << " not foun in the array." << endl;

    return 0;
}
