#include <iostream>
using namespace std;

// This function demonstrates "pass by reference"
void doSomething(int &num) {
    // Prints the original value (reference to the actual variable)
    cout << num << endl;   // Output: 10

    // Modifies the actual variable (not a copy!)
    num += 5;              // num = 15
    cout << num << endl;   // Output: 15

    num += 5;              // num = 20
    cout << num << endl;   // Output: 20

    // Changes made here directly affect the 'num' in main()
}

int main() {
    int num = 10;              // Original variable

    doSomething(num);          // Pass by reference (sends the real variable)

    // After the function call, the original 'num' is changed
    cout << num << endl;       // Output: 20

    return 0;
}
