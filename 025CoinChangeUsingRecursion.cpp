//This is a recursive solution of the Leetcode Question COIN CHANGE (322)

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(vector<int>& arr,int target){
    if(target==0)return 0;
    if(target<0) return INT_MAX;

    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = solve(arr,target-arr[i]);
        if(ans!=INT_MAX)
        mini = min(mini,ans+1);
    }
    return mini;
}

int main(){
    vector<int> arr{1,2,5};
    int target=100;

    int ans= solve(arr,target);
    cout<<ans;
    return 0;
}