/*
You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



A palindrome number is a number which reads the same both left to right and right to left.
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    int revNum = 0;
      
    cout << "Enter N: ";
    cin >> n;
    
    int duplicate = n;
    // So its basically comparing original 'N' with reverse of digit of 'N'
    
    while(n>0){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    
    if (duplicate == revNum){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
