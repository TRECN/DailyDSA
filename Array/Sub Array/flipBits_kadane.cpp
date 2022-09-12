#include<bits/stdc++.h>
using namespace std;
int flipBit(int *a,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
            a[i]=-1;
        }
        else    
            a[i]=1;
    }
    int currSum=0;
    int finalSum=0;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        finalSum=max(finalSum,currSum);
        currSum=currSum<0?0:currSum;
    }
    return count+finalSum;
}
int main(){
    int a[]={1,0,0,1,0,1,1,0};
    cout<<flipBit(a,8);
    return 0;
}