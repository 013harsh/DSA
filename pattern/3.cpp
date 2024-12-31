#include <iostream>
using namespace std;

int pattern1(int n){
    for(int i=1 ; n>=i ; i++){
        for(int j=1 ; i>=j ;j++){
            cout<<i;
            // cout<<j;
        }
        cout<<endl;
    }
    }

int main (){
    int n=5;
    pattern1(5);
}