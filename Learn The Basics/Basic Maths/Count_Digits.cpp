/*
Given the number 'n'. Find out and print
the number of digits present in number.

Example
Input: 124
Output: 3
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int counter = 0; // This will count the number of digits

    cout << "Enter N: ";
    cin >> n;

    // Loop runs as long as n is greater than 0
    while(n > 0) {
        int lastDigit = n % 10; // Gets the last digit (not needed for count, but helpful to understand)
        counter = counter + 1;  // Increments count for each digit
        n = n / 10;             // Removes the last digit (integer division)
        // Example: if n = 124 → 124 / 10 = 12 → 12 / 10 = 1 → 1 / 10 = 0
    }

    cout << "No of digits: " << counter;

    return 0;
}

// OR

/*
#include <bits/stdc++.h>

int count(int n){

   int count = (int)(log10(n)+1);
    
}

This mathematical trick also works :)
So its time complexity is O(log(N))
*/