#include<iostream>
using namespace std ;

bool find(int arr[], int size, int key) {

    for (int i =0 ; i< size ; i++){
        if (arr[i]==key ){
             return true;
        }
    }
    return false ; 
}


int main () {

    int arr [] = {1,4,2,5,8,3,6,9};
    int size = 8 ;
    int key = 11;

    
     if(find (arr,size , key))  {
        cout <<"found" << endl;
     
     }
     else {
        cout << "Not found"<< endl;
     }

    


}

