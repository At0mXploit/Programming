// Complete the function printNumber which takes an integer input from the user and prints it on the screen.

#include <iostream>
using namespace std;

void printNumber(){
    int number;
    cout << "Enter an integer: ";
    cin >> number; 
    cout << "Your entered: " << number << endl;
}

int main(){
    printNumber();
    return 0;
}