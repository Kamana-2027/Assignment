#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int comp_Rows = 0;
    int row = 1;

    while (n >= row) {
        n -= row;
        comp_Rows++;
        row++;
    }

    cout << comp_Rows;
    
    return 0;
}
