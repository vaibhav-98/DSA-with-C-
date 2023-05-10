//========================intersection of 2 array ==================================//

#include<iostream>
#include<vector>
using namespace std;



int main() {


    vector<int>arr{1,2,3,4,6,8};
    vector<int>brr{3,4,6,9};
    vector<int>ans;

//outer loop on arr vector
for (int i=0; i<arr.size(); i++){
  int ele = arr[i];

  // for every element run loop on brr

  for (int j=0; j<brr.size() ; j++){

    if(ele==brr[i]){
        // mark 
        brr[i]=-1;
        ans.push_back(ele);
    }
  }


}

// printing

for ( int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}

}


