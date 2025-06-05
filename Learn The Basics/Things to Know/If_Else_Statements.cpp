/* Given two integers, n and m. The task is to check the relation
 between n and m. Return "lesser" if n < m,
 "equal" if n == m, and "greater" if n > m. */

#include <iostream>
using namespace std;

int main(){
   int n,m;

   cout << "Enter N: ";
   cin >> n;
   cout << "Enter M: ";
   cin >> m;

   if (n<m){
    cout << "Lesser";
   } else if (n>m){
    cout << "Greater";
   } else if (n==m){
    cout << "Equal";
   }

   return 0;
}
