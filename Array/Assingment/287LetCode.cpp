//**************************************Find the Duplicate No. in An Array*******************************//

#include<iostream> 
using namespace std ;

int FindDuplicate(int*arr, int n) {
   while (arr[0] != arr[arr[0]])
   {
    swap(arr[0] , arr[arr[0]]);
   }
   return arr[0];


}



int main () {

    int arr[] ={4,1,3,4,2};
    int n = sizeof(arr)/sizeof(int);

   int ans = FindDuplicate(arr,n);

   cout<< ans << endl ;

}













