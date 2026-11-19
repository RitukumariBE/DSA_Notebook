#include<iostream>
#include<climits>
using namespace std ;
int main() {
    int n ;
    cout << "Enter the Integer:" ;
    cin >> n ;
    if ( n % 5 == 0 || n % 3 == 0) cout << n << " is divisible by 5 or 3.";
    else cout << "Condition not met";

}