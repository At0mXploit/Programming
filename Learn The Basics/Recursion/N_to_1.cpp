/*
Print N to 1 using recursion
*/

#include <iostream>
using namespace std;

void f(int i, int n){
    if (i > n){
        return;
    }
    cout << n << endl;
    f(i,n-1);
}

int main(){
    int n;
    cin >> n;
    f(1,n);
    return 0;
}