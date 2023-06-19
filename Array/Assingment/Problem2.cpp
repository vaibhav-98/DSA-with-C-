//********** Missing Element from an Array With Duplicate ****************************************//
#include<iostream> 
using namespace  std ;

void FindMissing(int*arr , int n) {
//visiting Method
for (int i =0 ; i<n ; i++) {
    int index = abs(arr[i]);
    if(arr[index-1] > 0) {
        arr[index] *= -1;
    }
}


// positive index are missing 
for (int i=0 ; i<n ; i++) {
   cout<< arr[i]<< " ";
}



}


int main () {

    int arr[] = {1,3,5,3,4};
    int n = sizeof(arr)/sizeof(int);

    FindMissing(arr,n);
    return 0;

}





















