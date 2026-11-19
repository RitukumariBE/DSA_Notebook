// Take 3 positive integers input and if they can be the sides of a triangle or not.
#include<iostream>
#include<climits>
using namespace std ;
int main() {
    int a,b,c ;
    cout << "enter the integer :" ;
    cin >> a;
    cout << "enter the integer :" ;
    cin >> b ;
    cout << "enter the integer :" ;
    cin >> c ;
    if ( (a<b+c) && (b<a+c) && (c<a+b)) cout << "They can be sides of triangle.";
    else cout << "They are not sides of triangle." ;

} 