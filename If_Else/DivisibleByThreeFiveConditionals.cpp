#include<iostream>
#include<climits>
using namespace std ;
int main() {
    int n ;
    cout << "Enter the number:" ;
    cin >> n ;
    if ( n % 5 == 0 && n % 3 == 0) cout << "Divisible by both";
    else 
        if (n % 5 == 0) cout << "Divisible by 5" ;
        else if (n % 3 == 0) cout << "Divisible by 3" ;
        else cout << "Not Divisible by both" ;
}