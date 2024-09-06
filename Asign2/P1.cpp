//Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"enter target:";
    cin>>target;
    int l = 0, h = n - 1;
    int idx = -1; 
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (nums[mid] == target) {
            idx = mid;
            break;
        } else if (nums[mid] > target) {
            l = mid + 1; 
        } else {
            h = mid - 1;
        }
    }

    if (idx != -1) {
        cout << "Element found at index: " << idx;
    } else {
        cout << "Element not found:";
    }

    return 0;
}
