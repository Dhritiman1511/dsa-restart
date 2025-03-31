#include <bits/stdc++.h>
using namespace std;

int bs(int arr[],int s, int e, int x){
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==x) return mid;
        if(arr[mid]<x) s = mid+1;
        else e = mid-1;
    }
    return -1;
}

int expSearch(int arr[], int x){
    int i=0;
    int j=1;
    while(arr[j]<x){
        i=j;
        j=j*2;
    }
    return bs(arr,i,j,x);
}

int main(){
    int a[] = {3,4,5,6,11,13,14,15,56,70};
    int x = 13;
    int ans= expSearch(a,x);
    if(ans==-1) cout<<"Element not found";
    else cout<<"Element found at index "<<ans;
    return 0;
}