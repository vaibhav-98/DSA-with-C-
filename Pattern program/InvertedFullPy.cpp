#include <iostream>
using namespace std ;

int main () {

    int n ;
    cin >> n ;

    for ( int row = 0;  row < n ; row +=1) {

        for ( int col = 0 ; col < row ; col +=1) {
            // space 
            cout << " " ;
        }
        for ( int col = 0 ; col < n - row ; col +=1) {

            //star 
            cout << "* " ;
        }
        cout << endl ;
    }

}




