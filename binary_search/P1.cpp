#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr.push_back(y);
    }  
    cout<<"enter number to be find:";
    cin>>x;                              
    int l = 0;
    int h = arr.size() - 1;
    int res = -1;
    
    while (l<= h) {
        int mid = l + (h-l) / 2;
        
        if (arr[mid] == x) {
            res = mid;    
            l = mid + 1;   
        } else if (arr[mid] < x) {
            l = mid + 1;   
        } else {
            h = mid - 1;  
        }
    }
    
    
    if (res != -1) {
        cout << "The last occurrence of " << x << " is at index " <<res << endl;
    } else {
        cout <<"is not present in the array." << endl;
    }
    
    return 0;
}
