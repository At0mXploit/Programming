/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    if (n == 1 || n ==2) {
        cout << "The " << n << "th Fibonacci number is: 1" << endl;
    } else {
        int a = 1, b = 1, fib;
        for (int i = 3; i<=n; i++) {
            fib = a+b;
            a = b;
            b = fib;
        }
        cout << "The " << n << "th fibonacci number is: " << fib << endl; 
    }
    return 0;
}