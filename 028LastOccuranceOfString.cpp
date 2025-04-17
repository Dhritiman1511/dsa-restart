#include <iostream>

using namespace std;

void lastOccLTR(string &s,char x, int i, int &ans){ //left to right check
    if(i>=s.size()) return;
    if(s[i]==x) ans = i;
    lastOccLTR(s,x,i+1,ans);
}
void lastOccRTL(string &s,char x, int i, int &ans){ //right to left check
    if(i<0)return;
    if(s[i]==x){
        ans=i;
        return;
    }
    lastOccRTL(s,x,i-1,ans);
}

int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = -1;
    lastOccLTR(s,x,0,ans);
    cout<<ans<<endl;
    lastOccRTL(s,x,s.size(),ans);
    cout<<ans;
    return 0;
}