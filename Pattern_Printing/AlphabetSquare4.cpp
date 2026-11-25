#include<iostream>
using namespace std;
int main(){
    int row ;
    cout<<"Enter the Rows:- " ;
    cin >> row ;
    for(int i = 1;i<=row ; i++){
        for(int j = 1 ; j<= row;j++){
            if ( i % 2 != 0) cout << (char)(96+i) ;
            else cout << (char)(64+i) ;
        }
        cout << endl ;
    }
}