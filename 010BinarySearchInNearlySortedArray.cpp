#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target){

    int start = 0, end = size - 1;
    int mid = start+ ((end - start) / 2);

    while (start <= end){

        if (arr[mid] == target)
            return mid;
        if (mid+1<end && arr[mid+1] == target){
            return mid+1;
        } 
        if (mid-1>=0 && arr[mid-1] == target){
            return mid-1;
        }
        else if ( arr[mid] < target)
            start = mid + 2;
        else
            end = mid - 2;

        mid = start+ ((end - start) / 2);
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 2, 4, 6, 5, 7, 9, 8, 10, 12, 11, 13, 15, 14, 16, 18, 17, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget != -1)
        cout << "Element found at index: " << indexOfTarget << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}