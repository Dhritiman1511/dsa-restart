#include "bits/stdc++.h"
using namespace std;

vector <bool> Sieve(int n){
    vector <bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i=2; i*i<=n; i++){
        if(prime[i]){
            int j=i*i;
            while(j<=n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return prime;
}

vector<bool> segSieve(int L, int R){
    //get prime array to use it to mark segSieve array;
    vector<bool> sieve = Sieve(sqrt(R));
    vector<int> basePrimes;
    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R-L+1,true);
    for (int i = L; i <= min(R, 1); i++) {
        segSieve[i - L] = false;
    }    

    for(auto prime:basePrimes){
        int first_mul = (L/prime)*prime;
        if(first_mul < L) first_mul += prime;
        int j = max(first_mul,prime*prime);

        while(j<=R){
            segSieve[j-L] = false;
            j += prime;
        }
    }
    return segSieve;
}

int main(){
    int L, R;
    cin>>L>>R;
    vector<bool> ss = segSieve(L, R);
    for(int i=L; i<=R; i++){
        if(ss[i-L]) cout<<i<<" ";
    }
    return 0;
}