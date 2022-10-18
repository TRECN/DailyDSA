#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int>&w,vector<int>&v,int W,int n){
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        t[i][0]=0;
    }
    for(int i=0;i<W+1;i++){
        t[0][i]=0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(w[i-1]<=j)
                t[i][j]=max(v[i-1]+t[i-1][j-w[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][W];
}
int main(){
    vector<int>w={2,3,5,6};
    vector<int>v={15,2,3,10};
    int W=9;
    int n=4;
    cout<<knapsack(w,v,W,n);
}