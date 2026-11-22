#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter the integer:" ;
    cin >> n ;
    for (int i = 2 ; i <= n - 1 ; i++) {
        if (n % i == 0) {
            cout << "It is not Prime Number,it's a composite number" << endl ;
            break ;
        }
    }
}