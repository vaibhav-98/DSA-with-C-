#include<iostream>
using namespace std ;

// 3 Pointer Approch
void sortArray( int*arr, int n) {
    int l=0 , m=0 , h =n-1;
    while (l<=h)
    {
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++,m++;
        }
        else if (arr[m]==1 )
        {
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
        
    }
    
}

int  main () {
    int arr [] ={1,0,0,2,1,2};
    int n=sizeof(arr)/sizeof(int);

    sortArray(arr,n);
    //print array
    for (int i=0 ; i<n ; i++) { 
        cout<<arr[i]<<" " ;
    }
    cout<<endl;

}