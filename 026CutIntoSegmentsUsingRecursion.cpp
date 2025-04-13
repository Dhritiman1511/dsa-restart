//This is a recursive solution of the Code 360 Question Cut Into Segments

#include <iostream>
#include <limits.h>
using namespace std;

int solve(int n, int x, int y, int z){
    if(n==0) return 0;

    int a=INT_MIN;
    if(n-x>=0){
        a = solve(n-x,x,y,z)+1;
    }

    int b=INT_MIN;
    if(n-y>=0) b=solve(n-y,x,y,z)+1;

    int c=INT_MIN;
    if(n-z>=0) c=solve(n-z,x,y,z)+1;

    return max(a,max(b,c));
}

int main(){
    int n=7;
    int x=1;
    int y=5;
    int z=2;

    int ans = solve(n,x,y,z);
    if(ans<0) ans = 0;
    cout<<ans;
    return 0;
}