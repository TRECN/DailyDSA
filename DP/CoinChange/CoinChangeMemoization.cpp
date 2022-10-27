#include<bits/stdc++.h>
using namespace std;
int count(vector<int>&coins,int n,int sum,vector<vector<int>>&t){
    if(sum==0)
        return t[n][sum]=1;
    if(n<=0)
        return t[n][sum]=0;
    if(t[n][sum]!=-1)
        return t[n][sum];

    if(coins[n-1]<=sum)
        return count(coins,n,sum-coins[n-1],t)+count(coins,n-1,sum,t);
    return count(coins,n-1,sum,t);
}
int main(){
    vector<int> coins={1,2,3};
    int n=coins.size();
    int sum=4;
    vector<vector<int>>t(n+1,vector<int>(sum+1,-1));
    cout<<count(coins,n,sum,t);
}