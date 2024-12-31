#include <iostream>
using namespace std;

int pattern9(int n){
    for(int i=1; i<n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<j;
        }
        
        int y=4;
        for(int x=0 ; x<2*y-2*i; x++){
            cout<<"@";
        }

        for(int j=1; j<=i ; j++){
            cout<<j;
        }

        cout<<endl;   
    }
}

int main(){
    int n=5;
    pattern9(5);
}