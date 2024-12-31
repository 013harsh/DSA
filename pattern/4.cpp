#include <iostream>
using namespace std;

int pattern4(int n){
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<n-i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main (){
    int n=5;
    pattern4(5);
    return 0 ;

}