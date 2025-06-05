/*
GCD/HCF

You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers.
Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

*/

// Euclidean Algorithm

#include <iostream>
using namespace std;

// Recursive function to find GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int result = gcd(a, b); // call the recursive function

    cout << "GCD: " << result << endl;

    return 0;
}

// Main Formula when a > b = gcd(a,b) = gcd(a%b,b)


// Formula = gcd(a,b) = gcd(a-b,b)


// Rules: a should always be greater than b
/*
From above formula

Step 1: gcd(20,15) = gcd(5,15) here b > a so we change it in next step.

Step 2: gcd(15,5) = gcd(10, 5) = gcd(5,5) = gcd(0,5) Here a > b so we didnt change step.

The moment it becomes zero remianing is gcd in this case its '5'.

*/

/*
EUCLIDEAN ALGORITHM (To find GCD of two numbers A and B):

Step 1: Divide A by B → A = B * Q + R
Step 2: Replace A with B, and B with R
Step 3: Repeat steps until R becomes 0
Step 4: When R = 0, GCD = B (last non-zero remainder)

EXAMPLE: Find GCD of 48 and 18

| Step | A  | B  | A % B (R) |
|------|----|----|-----------|
| 1    | 48 | 18 | 12        |
| 2    | 18 | 12 | 6         |
| 3    | 12 | 6  | 0         |

=> GCD = 6

Explanation:
- 48 % 18 = 12
- 18 % 12 = 6
- 12 % 6 = 0 → GCD is 6
*/