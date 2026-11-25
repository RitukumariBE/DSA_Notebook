#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the Row ;" ;
    cin >> n ;

    for(int i = 1 ; i <= n ;i++) {
        for (int j = 1; j <= n ;j++){
            int k = i + j ;
            if (k <= n) cout << "# " ;
            else if ( k == (n+1)) cout << "* " ;
            else cout<< "# " ;

        }
        for(int j = 3 ; j <= i ; j++){
            cout << "# " ;
        }
        for(int j = 2 ; j <= i ; j++){
            if(j == 2) cout << "* " ;
            else cout << "  " ;
            
        }
        cout << endl ;
    }

    for(int i = 1; i<= n-1 ; i++){
        for(int j = 2 ; j <= i ; j++){
            cout << "# " ;
        }
        for(int j = 1 ; j <= )
        cout << endl ;
    }
}