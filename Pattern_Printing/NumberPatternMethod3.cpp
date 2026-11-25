#include<iostream>
using namespace std ;
int main(){
    int rows ;
    cout << "Enter the rows :- " ;
    cin >> rows ;
    for (int i = 1;i<= 2*rows - 1; i++){
        for(int j = 1; j <= 2*rows - 1 ; j ++) {
            if(i<= rows && j <= rows){
                if (i <= j) cout << i << " " ;
                else cout << j << " ";
            }
            else{
                int a = 8 - i ;
                int b = 8 - j ;
                if(a <= b) cout << a << " " ;
                else cout << b << " " ;
            }
        }
        cout << endl ;

    //     for ( int j = rows - 1 ; j >= 1 ; j --){
    //          if (i <= j) cout << i << " " ;
    //          else cout << j << " ";
    //     }
    //     cout << endl ;
    // }

    // for (int i = rows- 1 ; i>= 1 ; i--){
    //     for(int j = 1 ;j <= rows ; j++){
    //         if (i <= j) cout << i << " " ;
    //         else cout << j << " ";
    //     }

    //     for(int j = rows - 1 ; j >= 1 ; j--){
    //         if (i <= j) cout << i << " " ;
    //         else cout << j << " ";
    //     }
    //     cout << endl ;
        
    }
}