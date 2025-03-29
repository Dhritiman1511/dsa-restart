#include <bits/stdc++.h>
using namespace std;

int solve(int dividend, int divisor){
    int s=0;
    int e= abs(dividend);
    int ans = 0;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(mid*abs(divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        if(mid*abs(divisor) > abs(dividend)){
            e = mid-1;
        }
        else{
            s = mid+1;
            ans = mid;
        }
        mid = s+(e-s)/2;
    }

    if((divisor>0) && (dividend>0) || (divisor<0) && (dividend<0)){
        return ans;
    }
    else return -ans;
} 

int main(){
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout << "The result of division is: " << ans << endl;
    return 0;
}