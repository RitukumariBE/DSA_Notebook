#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Value of n:";
    cin >> n ;
    //2 5 8 11 14 17...
    // for(int i=2;i<=3*n-1;i+=3){
    //     cout<<i<<" " ;
    // }

    // for(int i=1;i<=n;i++){
    //     cout<<3*i-1<<" ";
    // }

    int a = 2 , d=3;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a += d;
    }
}