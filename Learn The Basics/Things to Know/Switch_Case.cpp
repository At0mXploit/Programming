/*
Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
If the user's choice is 1, calculate the area of the circle having the given radius(R).  
Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

Note : A list arr[], containing the single value R or the two values L and B, as input parameters. Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int choice, radius, length, breadth;
    float area_circle, area_rectangle;
    const float pi = 3.14;
    
    cout << "Choice: ";
    cin  >> choice;
    switch (choice)
    {
    case 1:
        /* code */
        cout << "R: ";
        cin >> radius;
        area_circle = pi*(radius*radius);
        cout << area_circle;
        break;
    
    case 2:
        
        cout << "L: ";
        cin >> length;
        cout << "B: ";
        cin >> breadth;
        area_rectangle = length * breadth;
        cout << area_rectangle;
        break;
    default:
        break;
    }
    return 0;
}
