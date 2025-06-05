/*
You are given an integer n. You need to find all the divisors of n.
 Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.

Input: n = 6

Output = [1, 2, 3, 6]

Explanation: The divisors of 6 are 1, 2, 3, 6.

*/

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter N: ";
    cin >> n;

    // Example: n = 12
    // We check all i from 1 to 12

    for (int i = 1; i<=n; i++){
        // If n % i == 0, then i is a divisor of n
        // e.g., 12 % 3 == 0 → 3 is a divisor

        if ( n%i ==0){
            cout << i << " "; // Output: 1 2 3 4 6 12 for n = 12
        }
    }
    return 0;
}