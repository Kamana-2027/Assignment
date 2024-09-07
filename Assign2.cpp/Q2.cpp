//Write a program to calculate the reverse of a given positive integer using recursion1


#include <iostream>
using namespace std;
int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    cin >> n;
    int reversed = reverseNumber(n, 0);
    cout << "The reverse of " << n << " is: " << reversed << endl;
    return 0;
}
