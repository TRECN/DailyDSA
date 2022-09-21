#include<bits/stdc++.h>
using namespace std;
int longestConsicutiveSeq(int *a,int n){
    sort(a,a+n);
    int count=1;
    int finalc=1;
    int curr=a[0];
    for(int i=1;i<n;i++){
        if(curr+1==a[i])
            count++;
        else if(curr!=a[i])
            count=1;
        curr=a[i];
        finalc=max(finalc,count);
    }
    return finalc;
}
int main(){
    int a[]={9,5,4,10,10,6};
    cout<<longestConsicutiveSeq(a,6);
    return 0;
}