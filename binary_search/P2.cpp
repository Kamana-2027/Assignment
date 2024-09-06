//Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<bits/stdc++.h>
using namespace std;
int count(const vector<int>& arr) {
    int l = 0;
    int h = arr.size() - 1;
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (arr[m] == 1 && (m == 0 || arr[m - 1] == 0)) {
            return arr.size() - m;
        } else if (arr[m] == 1) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    
    return 0;
}
int main() {
    vector<int>arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr.push_back(y);
    }  
    cout << "Total number of 1's: " << count(arr) << endl;
    
    return 0;
}
