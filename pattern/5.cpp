#include <iostream>
using namespace std;

int pattern5(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i-1; j++){
            cout<<" ";
        }

            for(int y=0; y<2*i+1; y++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    
}

// int main (){
// int n=5;
// pattern5(5);
// return 0 ;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=0 ; i<n ; i++ ){
//         for(int j=0 ; j<=n-i-1 ; j++){
//             cout<<" ";    
//         }
//         for(int y=0 ; y<=i ; y++){
//             cout<<"*";
//         }
        
//         for(int x=0 ; x<i ; x++){
//             cout<<"*";
//         }

//         for(int j=0 ; j<=n-i-1 ; j++){
//             cout<<" ";  }
//         cout<<endl;
//     }
// }