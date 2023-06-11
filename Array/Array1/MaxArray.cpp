//max no. in an array

#include<iostream>
#include<limits.h>
using namespace std;

int main () {

int arr[]= {2,4,6,1,8,9,5,3};
int size =8;

int maxi= INT_MIN;

for(int i=0; i < size ;i++ ){
    if(arr[i]>maxi){
        maxi=arr[i];
    }

}
cout<<"maximum no is "<< maxi<<endl;


}
