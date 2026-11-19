#include<iostream>
#include<climits>
using namespace std ;
int main (){
    int x ;
    cout << "Enter your integer: " ;
    cin >> x ;
    if ((x>=1000 && x<= 9999 ) || (x >= -9999 &&  x <= -1000)) cout << x<< " is a four digit number." ;
    else cout << x << " is not a four digit number." ;
}
