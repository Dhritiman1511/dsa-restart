#include "bits/stdc++.h"
using namespace std;

vector <bool> Sieve(int n){
    vector <bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i=2; i*i<=n; i++){ //optimization 2: say for n=20 if i=5, then in inner loop j>n so it is unnecessary to calculate for i whose square is already greater than n
        if(prime[i]){
            // int j=i*2;
            int j=i*i; //optimization 1: say for i=5, 5*1 , 5*2, 5*3, 5*4 all has already been marked so start from 5*5 (i*i)
            while(j<=n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return prime;
}

int main(){
    int n = 20;
    vector <bool> prime = Sieve(n);
    for(int i=0; i<=n; i++){
        if(prime[i]) cout<<i<<" ";
    }
    return 0;
}