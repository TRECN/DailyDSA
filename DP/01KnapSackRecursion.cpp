#include<bits/stdc++.h>
using namespace std;


int knapsack(vector<int>&w,vector<int>&v,int W,int n){
    if(n==0||W==0)
        return 0;
    if(w[n-1]<=W)
        return max(v[n-1]+knapsack(w,v,W-w[n-1],n-1),knapsack(w,v,W,n-1));
    else
        return knapsack(w,v,W,n-1);
}
int main(){
    vector<int>w={2,3,5,6};
    vector<int>v={15,2,3,10};
    int W=9;
    int n=4;
    cout<<knapsack(w,v,W,n);
}