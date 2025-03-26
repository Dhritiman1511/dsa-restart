#include <bits/stdc++.h>
using namespace std;

//STL function upper_bound() can be used to find this

int lastOccurance(int arr[], int size, int target)
{

    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);
    int index = -1;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            index = mid;
            start = mid + 1;
        }
        else if (element < target)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + ((end - start) / 2);
    }
    return index;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int indexOfTarget = lastOccurance(arr, size, target);

    if (indexOfTarget != -1)
        cout << "Last occurance of element found at index: " << indexOfTarget << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}