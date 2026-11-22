#include<iostream>
#include <cmath>
using namespace std ;
int main() {
    int n ;
    cout << "Enter the Integer:" ;
    cin >> n ;
    // int factors ;
    // for (int i = 1 ; i <= n ; i ++){
    //     if(n % i == 0 ) {
    //         factors ++ ;
    //     }
    // }

    // if(factors == 1) cout << "Neither Prime nor Composite" ;
    // else if(factors >= 3) cout << "Composite Number" ;
    // else cout << "Prime Number" ;

    bool flag = false ; // false means prime
    for (int i = 2 ; i <= n - 1 ; i ++ ) {
        if ( n % i == 0 ){
            flag = true ;
            break ;
        }
    }
    if(flag == false) cout << "Prime number" ;
    else cout << "Composite Number" ;

}