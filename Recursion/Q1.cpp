//Print an increasing-decreasing sequence using recursion
#include <iostream>
using namespace std;

void printSequence(int n, int current) {
    if (current > n)
        return;
    cout << current << " ";
    printSequence(n, current + 1);
        cout << current << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printSequence(n, 1);
    cout<< endl;

    return 0;
}
