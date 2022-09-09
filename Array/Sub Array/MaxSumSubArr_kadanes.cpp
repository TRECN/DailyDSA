#include<bits/stdc++.h>
using namespace std;
int maxSumSubArr(int *a,int n){
    int maxCurr=0;
    int maxFinal=INT_MIN;
    for(int i=0;i<n;i++){
        maxCurr+=a[i];
        maxFinal=max(maxFinal,maxCurr);
        maxCurr=(maxCurr<0)?0:maxCurr;
    }
    return maxFinal;
}
int main(){
    int a[]={-1,-4,5,3,-20,-7,-5};
    cout<<maxSumSubArr(a,7);
}