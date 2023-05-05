#include<iostream> 
using namespace std ;

int main () {

int n ;
cin >> n ;

for ( int row = 0 ; row < n; row +=1) {

    // star 
    for ( int col = 0 ; col <n- row ; col +=1) {

    cout << "*";
    }
    // spaces 
    for ( int col =0 ; col < 2*row+1; col +=1) {

        cout << " " ;
    }
     // star 
    for ( int col = 0 ; col < n-row ; col +=1) {

    cout << "*";
    }
    
    cout << endl ;
}

for ( int row = 0 ; row < n; row +=1) {

    // star 
    for ( int col = 0 ; col < row ; col +=1) {

    cout << "*";
    }
    // spaces 
    for ( int col =0 ; col < 2*n-2*row+1; col +=1) {

        cout << " " ;
    }
     // star 
    for ( int col = 0 ; col < row ; col +=1) {

    cout << "*";
    }
    
    cout << endl ;
}

}