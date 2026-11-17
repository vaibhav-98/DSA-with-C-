#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr [], int size, int target) {
    int start = 0;
    int end =  size -1;
   // int mid = start + (end -start)/2;
    
    while(start<=end) {
        
        int mid = start + (end -start )/2;
         
        if(target == arr[mid] ) {
            return mid;
        }
        else if( target <arr[mid] ) {
              end = mid -1;
        }
        else if(target >arr[mid] ) {
             start = mid +1;
        }
        
       
    }
    return -1;
}


int main() {
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;
    int target = 14;
    int indexOftarget = binarySearch(arr, size, target);
       if( indexOftarget == -1 ) {
           cout<<" not found "<<indexOftarget<<endl;
       }
       else {
           cout<<" Target found at index: "<<indexOftarget<<endl;
       }
}
