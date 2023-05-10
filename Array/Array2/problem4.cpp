//================================ pair sum =================================//

#include<iostream>
#include<vector>
using namespace std ;



int main () {


    vector<int >arr{10,20,40,60,70};
    int sum = 80;
    //outer loop 

    for ( int i =0; i < arr.size(); i++ ) {

        int ele = arr[i];

        // inner loop 

        for ( int j = 0 ; j< arr.size() ; j ++) {

            if (ele + arr[j] ==  sum ){
                cout << "pair found " << ele << " , "<< arr[j]<< endl;
            }
        }
    }

}



