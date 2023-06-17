//************************************* Find the last Element of Occurence========================

#include<iostream>
#include<vector>
using namespace std  ;

int lastOcc(vector<int>arr , int target) {

    int start = 0;
    int end = arr.size() - 1 ;
    int mid = start + ( end - start) / 2;
    int ans = -1 ;

    while (start<=end) {
        if (arr[mid]==target) {
            ans = mid;
            // right search
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left search
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            //right search
            start = mid +1;
        }
        mid =  start+(end  -start)/2;
        
    }
    return ans ;
}


int main () {

vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
int target = 7;

 int ans = lastOcc(v,target);

 cout<<" last Occ = "<< ans << endl;

 return 0 ;

}










