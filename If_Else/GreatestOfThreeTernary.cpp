#include<iostream>
#include<climits>
using namespace std ;
int main() {
    int a , b , c ;
    cout << "Enter the Integer:" ;
    cin >> a ;
    cout << "Enter the Integer:" ;
    cin >> b ;
    cout << "Enter the Integer:" ;
    cin >> c ;
    cout << "The greatest number is" ;
    cout << ((a > b) ? ((a>c)? a : c):((b>c)?b : c)) ;

}