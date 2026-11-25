#include<iostream>
using namespace std ;
int  main(){
    int row ;
    cout << "Enter the number:- " ;
    cin >> row ;

    for(int i = 1 ; i <= row ; i++) {
        for(int j = 1 ; j <= row ; j++ ){
            int k = i + j ;
            if (k <= row) cout << "  " ;
            else cout << (char)(64 + i)<<" " ;
        }
        cout << endl ;
    }
}