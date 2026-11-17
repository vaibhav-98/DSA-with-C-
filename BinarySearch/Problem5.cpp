//********************** Find the Occurence of an Element **********************************//


#include<iostream> 
#include<vector>
using namespace std ;

int findfirstOcc(vector<int>arr , int target){

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

//====================== last occ ====================== //

int findlastOcc(vector<int>arr , int target) {

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

    int firstOcc = findfirstOcc(v,target);
    cout<<"first occ "<< firstOcc<<endl;
    

    int lastOcc = findlastOcc(v,target);
    cout<< "last occ "<< lastOcc << endl;

    int totalOcc = 0;

   if (firstOcc != -1 && lastOcc != -1) {
        totalOcc = lastOcc - firstOcc + 1;
     }

    return 0;

}
















