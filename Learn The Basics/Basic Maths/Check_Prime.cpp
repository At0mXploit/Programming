/*
You are given an integer n. You need to check if the number is prime or not.
Return true if it is a prime number, otherwise return false.
A prime number is a number which has no divisors except 1 and itself.

Input: n = 5

Output: true

Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int counter = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i=1; i <= n; i++){
        if (n % i == 0){
            counter++;
        }
    }

    if (counter == 2){
        cout << "True (Prime)";
    }
    else {
        cout << "False (Non-Prime)";
    }

    return 0;

}