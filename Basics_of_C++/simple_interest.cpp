#include<iostream>
using namespace std ;
int main(){
    float p , r ,t ;
    float si ;
    cout << "Enterr the principal amt :";
    cin >> p ;
    cout << "enter the rate of interest :" ;
    cin >> r ;
    cout << "Enter the time :";
    cin >> t ;
    si = (p * r * t) / 100 ;
    cout << "The simple interest is " << si << endl ;

}