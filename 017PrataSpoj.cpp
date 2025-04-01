//Prata Spoj https://www.spoj.com/problems/PRATA/

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<int> ranks, int n, int mid){
    int currP=0;
    for(int i=0; i<ranks.size(); i++){
        int R = ranks[i], j=1;
        int timeTaken = 0;

        while(true){
            if(timeTaken + j*R <= mid) {
                currP++;
                timeTaken+=j*R;
                j++;
            }
            else{
                break;
            }
        }
        if(currP>=n) return true;
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> ranks, int n){
    int start = 0;
    int end = (ranks[0]*n*(n+1))>>1;
    int ans = -1;

    while(start<=end){
        int mid = (end+start)>>1;
        if(isPossibleSol(ranks, n, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return ans;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int nP,nC;
        cin>>nP>>nC;
        vector<int> cooksRank;
        while(nC--){
            int R;
            cin>>R;
            cooksRank.push_back(R);
        }

        cout<<minTimeToCompleteOrder(cooksRank,nP)<<endl; 
    }
    return 0;
}