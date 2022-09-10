#include<bits/stdc++.h>
using namespace std;
int maxSumForKele(int *arr,int n,int k){
    int maxSum=0;
    for(int i=0;i<k;i++)
        maxSum+=arr[i];
    
    int curSum=maxSum;
    for(int i=k;i<n;i++){
        curSum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,curSum);
    }
    return maxSum;
}
int main(){
    int arr[]={5,2,-1,0,3};
    cout<<maxSumForKele(arr,5,3);
    return 0;
}