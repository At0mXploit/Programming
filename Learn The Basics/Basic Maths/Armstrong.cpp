/*
Armstrong Number - Print True If Number is Armstrong else False.
Basically Armstrong number is which digits cube sum matches the original number.ADJ_FREQUENCY

Example:
Input: 371
Output: True
Explaination: 371 = 3^3 + 7^3 + 1^3 = 371
*/

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter N: ";
    cin >> n;

    int sum = 0;
    int duplicate = n; // Store original number to compare at end

    // Armstrong number logic:
    // For a 3-digit number, if:
    // sum of cube of digits == original number → Armstrong

    while (n > 0) {
        int lastDigit = n % 10; // extract last digit

        // Math:
        // Cube the digit and add to sum
        // Example: 3 → 3^3 = 27
        sum = sum + (lastDigit * lastDigit * lastDigit);

        n = n / 10; // remove last digit
    }

    // Compare computed sum with original number
    if (duplicate == sum){
        cout << "True"; // It's an Armstrong number
    } else {
        cout << "False"; // Not an Armstrong number
    }

    return 0;
}
