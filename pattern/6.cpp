#include <iostream>
using namespace std;
// #include "5.cpp"

int pattern6(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            cout<<" ";
        }
        
        for(int y=0; y<2*n-2*i-1; y++){
            cout<<"*";
        }
        cout<<endl;}
    }

    

int main(){
    int n;
    cin>>n;
    // pattern5(n);
    pattern6(n);
    return 0 ;
}