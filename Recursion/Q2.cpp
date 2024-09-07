//Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion

#include <iostream>
using namespace std;

int sumOdd(int a, int b) {
    if (a > b)
        return 0;
    if (a % 2 != 0)
        return a + sumOdd(a + 1, b);
    return sumOdd(a + 1, b);
}

int main() {
    int a, b;
    cout << "Enter the starting value: ";
    cin >> a;
    cout << "Enter the ending value: ";
    cin >> b;

    int result = sumOdd(a, b);
    cout << "The sum of odd numbers from " << a << " to " << b << " is: " << result << endl;

    return 0;
}
