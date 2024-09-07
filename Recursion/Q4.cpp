//!< There are n stairs, and a person standing at the bottom wants to climb the stairs to reach the nth stair. The person can climb either 1, 2, or 3 stairs at a time. Write aprogram to count the number of ways the person can reach the top using recursion.


#include <iostream>
using namespace std;

int countWays(int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int result = countWays(n);
    cout << "Number of ways to reach the top of " << n << " stairs: " << result << endl;

    return 0;
}
