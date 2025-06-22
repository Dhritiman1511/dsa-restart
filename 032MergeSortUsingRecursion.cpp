#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    
    int len1 = mid -s + 1;
    int len2 = e-mid;

    int *left = new int[len1];
    int *right = new int[len2];

    //copy values to left array
    int k = s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    //copy values to right array
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    //copy the remaining array as it is
    while(leftIndex<len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }


}

void mergesort(int *arr, int s, int e){
    if(s>=e) return;

    int mid = (s+e)/2;
    //left part
    mergesort(arr, s, mid);
    //right part
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[] = {23,8,719,3,6,1,88,88};
    int n = 8;

    int s=0;
    int e=n-1;
    mergesort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;

    return 0;
}