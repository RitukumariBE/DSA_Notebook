#include<iostream>
using namespace std;
int main(){
    int row,col ;
    cout<<"Enter the Rows:- " ;
    cin >> row ;
    for(int i = 1;i <= row; i++){
        for(int j= 1; j<= col;j++){
            int a = i + j ;
            if (a ==(row+ 1) || (i == j )) cout << "* " ;
            else cout << "  " ;
        }
        cout << endl ;
    }
}