//Missing element in Array with Duplicate elements - Approach-2
//Advantage: constraint a[i]∈[1,n]
//SORTING + SWAPPING METHOD
//Send each elements to it's self valued index

#include <iostream>
using namespace std;

void findMissing(int *a,int n){
    int i=0;
    while(i<n){
        int index=a[i]-1;
        if(a[i]!=a[index]){
            swap(a[i],a[index]);
        }
        else{
            i++;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]!=i+1)cout<<i+1;
    }
}

int main() {
    int a[]={1,3,5,3,4};
    int n=sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}