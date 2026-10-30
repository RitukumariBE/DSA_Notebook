#include<iostream>
using namespace std ;
int main() {
    int sp,cp ;
    cout << "Enter the Selling Price :" ;
    cin >> sp ;
    cout << "Enter the cost price :" ;
    cin >> cp ;
    if ( cp == sp) cout << "No Loss,No Profit"<< "Profit :"<< cp - sp ;
    else if (cp > sp) cout << "Loss :"<< cp - sp ;
    else cout << "Profit :" << sp - cp ;
}