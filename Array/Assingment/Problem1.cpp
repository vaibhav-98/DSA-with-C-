//====================== printing a 2D array ===============================
#include <iostream>
using namespace std;



void printrowArray(int arr [][3], int row , int col){


    for (int i=0; i< row ; i++){

        for (int j=0; j<col; j++){
            cout << arr[i][j]<<" ";
        }
        cout <<endl;
    }
}

int main()
{

    int arr[3][3];
    int row = 3;
    int col = 3;

    // row wise input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

   
   printrowArray(arr,row,col);
}

// testing my code
