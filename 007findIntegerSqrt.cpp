#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n){
    int target = n;
    int start = 0, end = n;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start <= end){
        if(mid*mid == target){
            return mid;
        }
        if(mid*mid>target){
            end = mid-1;
        }
        else{
            ans=mid;
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Square root of "<<n<<" is "<<ans<<endl;

    return 0;
}