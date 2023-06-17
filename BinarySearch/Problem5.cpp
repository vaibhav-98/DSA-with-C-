//********************** Find the Occurence of an Element **********************************//


#include<iostream> 
#include<vector>
using namespace std ;

int findOcc(vector<int>arr , int target){

    int start = 0;
    int end = arr.size() - 1;

    int  mid = start = (end - start)/2;
    int ans = -1 ;

    while (start <= end) 
    {
        if (mid == target)
        {
            ans = mid ;    // store ans
            end = mid - 1; // left search
        }
        else if (target < mid )
        {
            end = mid - 1; // left seach 
        }
        else if (target > mid ) 
        {
            start = mid + 1 ; // Right search
        }

        mid = start + (end - start)/2;
         
    }
    return ans ;
    
    
} 

//======================last occ================

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

    vector<int>v{1,3,4,4,4,4,4,6,7,9};
    int target = 4;

    int firstOcc = findOcc(v,target);
    cout<<"first occ "<< firstOcc<<endl;
    

    int lastOcc1 = lastOcc(v,target);
    cout<< "last occ "<< lastOcc1 << endl;

    int totalOcc =  lastOcc1 - firstOcc + 1;

    cout<< "totalOcc " << totalOcc << endl ;

    return 0;

}
















