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

        mid = start = (end - start)/2;
         
    }
    return ans ;
    
    
} 
 

int main () {

    vector<int>v{1,3,4,4,4,4,4,6,7,9};
    int target = 4;

    int ans = findOcc(v,target);
    cout<<"ans"<<ans<<endl;
    return 0;

}
















