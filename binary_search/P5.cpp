//perfect square


#include<iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    bool isPerfectSquare = false;

    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            isPerfectSquare = true;
            break;
        }
    }

    if (isPerfectSquare) {
        cout << "Yes, it is a perfect square";
    } else {
        cout << "No, it is not a perfect square";
    }
    
    return 0;
}
