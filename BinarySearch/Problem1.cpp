//**************************************Binary Search **********************************************************//


#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid == target)
        {
            // element found and  retuen index
            return mid;
        }
        else if (target < mid)
        {
            // Search in left
            end = mid - 1;
        }
        else if (target > mid)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1; // element not founf
}

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;
    int target = 20;
    int indexOftarget = binarySearch(arr, size, target);
    if (indexOftarget == -1)
    {
        cout << "target not found " << indexOftarget << endl;
    }
    else
    {
        cout << "found " << indexOftarget << endl;
    }
    return 0;
}
