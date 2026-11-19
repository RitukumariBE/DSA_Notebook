#include<iostream>
#include<climits>
using namespace std ;
int main () {
    int x , y ;
    cout << "Enter the x coordinate :" ;
    cin >> x ;
    cout << "Enter the y coordinates :" ;
    cin >> y ;
    if ( x > 0 && y >0) cout << "First Quadrant" ;
    else if ( x <0 && y > 0) cout << "Second Quadrant" ;
    else if ( x <0 && y < 0) cout << "Third Quadrant" ;
    else cout << "Fourth Quadrant" ;
}