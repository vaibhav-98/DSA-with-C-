#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;



int main() {
    // declare 2D Array 
    int brr[3][3];

//initialisation 2D Array
int arr[3][3]= {
  {2,3,4},
  {4,5,8},
  {8,7,9},
};

//   cout<<arr[2][2]<<endl;

//row - wise print 
// outer loop 
for (int i=0 ;i<3 ; i++){

    // for every row , we nwwd to print valie in each column 

    for (int j=0 ; j< 3; j++) {
        cout<<arr[i][j]<< endl;
    }
}

}




