#include<bits/stdc++.h>
long long sumSub(vector<int>&a,int n,int l,int r){
    long sum=0;
    for(int i=l;i<=r;i++){
        sum+=a[i%n];
    }
    return sum;
}
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<int>ans;
    const unsigned int M = 1000000007;
    for(int i=0;i<q;i++){
        long L=queries[i][0]-1;
        long R=queries[i][1]-1;
        ans.push_back(sumSub(arr,n,L,R)%M);   
    }
    return ans;
}
