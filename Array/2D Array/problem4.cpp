//========================= search element in 2D array =============================//

#include <iostream>
using namespace std;

bool find(int arr[][3], int row, int col, int key)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
                break;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][3];
    int row = 3;
    int col = 3;

    // taking input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout << " Enter the key what u want" << endl;
    cin >> key;
    if (find(arr, row, col, key))
    {
        cout << "found it" << endl;
    }
    else
    {
        cout << "Not found it" << endl;
    }
}
