#include<iostream>
using namespace std ;

int main () {

    int n ; 
    cin >> n ;

    // outer loop
    for ( int row = 0 ; row < n ; row +=1) {

        //inner loop 

        for ( int col = 0 ; col < n - row - 1 ; col +=1) {
             
              //space
              cout << " " ;


        }
        for ( int col=0 ; col < row + 1 ; col += 1) {
            // star 
            cout << "* " ;
        }
           
        cout << endl ;
        
    }
}