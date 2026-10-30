#include<iostream>
using namespace std;
int main(){
    cout << "Enter the Number:";
    float x ;
    cin >> x ;
    int y = (int)x ;
    if (x == y) cout << " It is a integer";
    else cout << "It's not an Integer." ;

}