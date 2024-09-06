//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive in sorted order. There is only one repeated number in nums, return this repeated number.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int repnum = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == nums[i + 1]) {
            repnum = nums[i];
            break;
        }
    }

    cout << repnum;
    
    return 0;
}
