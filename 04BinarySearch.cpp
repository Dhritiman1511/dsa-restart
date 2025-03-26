#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target){

    int start = 0, end = size - 1;
    int mid = start+ ((end - start) / 2);

    while (start <= end){
        int element = arr[mid];

        if (element == target)
            return mid;
        else if (element < target)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start+ ((end - start) / 2);
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget != -1)
        cout << "Element found at index: " << indexOfTarget << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}