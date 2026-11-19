#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the Integer :" ;
    cin >> n ;
    if (n > 0) 
        if ( n < 69) cout << n << " is smaller than 69." ;
        else cout << n << " is not smaller than 69." ;
    else if ( n < 0) 
        if ( (-n) < 69) cout << n << " is smaller than 69 by magnitude." ;
        else cout << n << " is not smaller than 69." ;
}