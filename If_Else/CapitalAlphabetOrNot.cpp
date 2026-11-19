#include<iostream>
#include<climits>
using namespace std ;
int main(){
    char x;
    cout << "Enter your Alphabet:";
    cin >> x ;
    int ascii = (int)x ;
    if ( ascii >= 65 && ascii <= 90) cout << x << " is Capital Alphabet." ;
    else cout << x << " is not Capital alphabet." ;
}