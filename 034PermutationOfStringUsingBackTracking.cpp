//In this question we dont need to use backtracking to solve it, it's merely just a simple example on how we can use backtracking
#include <bits/stdc++.h>
using namespace std;

void printPermutation(string &str, int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        printPermutation(str,i+1);
        swap(str[i],str[j]);
    }
}

int main(){
    string str = "abc";
    int i=0;
    printPermutation(str,i);
    return 0;
}