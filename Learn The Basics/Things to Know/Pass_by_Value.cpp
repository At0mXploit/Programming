#include <iostream>
using namespace std;

// This function demonstrates "pass by value"
void doSomething(int num) {
    // This prints the original value passed in (which is a copy)
    cout << num << endl;   // Output: 10

    // Modifies the local copy of 'num'
    num += 5;              // num = 15
    cout << num << endl;   // Output: 15

    num += 5;              // num = 20
    cout << num << endl;   // Output: 20

    // Note: All changes are made on the copy. The original variable in main() is untouched.
}

int main() {
    int num = 10;              // Declare and initialize original variable

    doSomething(num);          // Call function by value (sends a copy)

    // After the function call, the original 'num' is still unchanged
    cout << num << endl;       // Output: 10

    return 0;
}
