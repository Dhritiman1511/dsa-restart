#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans = factorial(n);

    cout<<"factorial is "<<ans<<endl;

    return 0;
}