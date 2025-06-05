/*
Print Name N times using Recursion
*/

#include <iostream>
using namespace std;

void f(int i, int n) {
    if (i > n) {
        return; // Stops
    }

    cout << "Rijan" << endl;
    f(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    f(1, n);  // Start from 1
    return 0;
}
