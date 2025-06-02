/*
You are given an integer n. Return the
 integer formed by placing the digits of n in reverse order.

Input: n = 25

Output: 52

Explanation: Reverse of 25 is 52.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int revNum = 0;

    cout << "Enter N: ";
    cin >> n;

    while(n > 0) {
        int lastDigit = n % 10;              // Get last digit (e.g., 25 % 10 = 5)

        // Math:
        // revNum = revNum * 10 + lastDigit
        // This shifts revNum left by one place and adds new digit at unit place
        // Example:
        // n = 25 → step 1: revNum = 0 * 10 + 5 = 5, n = 2
        //          step 2: revNum = 5 * 10 + 2 = 52, n = 0

        revNum = revNum * 10 + lastDigit;

        n = n / 10;                          // Drop last digit from n (e.g., 25 / 10 = 2)
    }

    cout << revNum;
    return 0;
}

