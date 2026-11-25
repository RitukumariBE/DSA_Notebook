#include<iostream>
using namespace std;
int main(){
    int row ;
    cout<<"Enter the Rows:- " ;
    cin >> row ;
    for(int i = 1;i<=row ; i++){
        for(int j = 1 ; j<= row;j++){
            cout<<(char)(64+i);
        }
        cout << endl ;
    }
}