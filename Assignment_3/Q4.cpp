//(C Print all the elements of an array in reverse order using recursion

#include <iostream>
using namespace std;
void printReverse(int arr[], int start, int end) {
    if (start > end)
        return;
    printReverse(arr, start + 1, end);
    cout << arr[start] << " ";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printReverse(arr, 0, n - 1);
    cout << endl;

    return 0;
}
