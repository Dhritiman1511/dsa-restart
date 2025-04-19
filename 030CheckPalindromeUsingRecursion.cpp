#include <iostream>

using namespace std;

bool isPalindrome(string&s, int i, int j){
    if(i>=j)return 1;

    if(s[i]!=s[j] ) return 0;

    return isPalindrome(s,i+1,j-1);
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s,0,s.size()-1);
}