//Write a program to calculate the sum of the digits of a given positive integer using recursion1

#include <iostream>
using namespace std;

int Digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + Digits(n / 10);
}

int main() {
    int n;
    cin >> n;
    int result = Digits(n);
    cout << "The sum of the digits of " << n << " is: " << result << endl;

    return 0;
}
