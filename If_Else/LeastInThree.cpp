#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int a , b , c ;
    cout << "Enter the Numbers:" ;
    cin >> a >> b >> c ;
    if (a <= b && a <= c) cout << a << " is the Least of them" ;
    else if (b <= a && b <= c) cout << b << " is the least of them" ;
    else cout << c << " is the least of them" ;
}