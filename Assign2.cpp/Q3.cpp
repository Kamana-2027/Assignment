//Given an integer num, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

#include <iostream>
using namespace std;

int nos(int num) {
    if (num == 0)
        return 0;
    if (num % 2 == 0)
        return 1 + nos(num / 2);
    else
        return 1 + nos(num - 1);
}
int main() {
    int num;
    cin >> num;
    int steps = nos(num);
    cout << "Number of steps to reduce " << num << " to zero: " << steps << endl;
    return 0;
}

//question 4;
//answer -->base on n the value will change eg, if n =1 then output is also 1 etc...