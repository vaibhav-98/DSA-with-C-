#include<iostream>
using namespace std;




void printArray(int arr[],int size){

    for(int i=0; i<size;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void incr (int arr[],int size){

    arr[1]=arr[1]+10;

    printArray(arr,size);
}


int main () {


    int arr[]= {5,6};
    int size= 2;

    incr(arr,size);
    printArray(arr,size);
}