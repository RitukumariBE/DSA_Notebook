#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x ;
    cout << "Enter the positive Integer:" ;
    cin >> x ;
    if (x % 15 == 0) cout << x << " is divisible by 5 & 3.";
    else 
        if (x % 5 == 0) cout << x << " is divisible by 5." ;
        else if ( x % 3 == 0) cout << x << " is divisible by 3." ;
        else cout << x << " is not divisible by 5 and 3.";
}