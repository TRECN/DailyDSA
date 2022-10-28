#include<bits/stdc++.h>
using namespace std;
int maxProfit(int n, int l,vector<vector<int>>&p,vector<vector<int>>&t){
    int m=0;
    if(t[n][l]!=-1)
        return t[n][l];
    for(int i=0;i<3;i++){
        if(i!=l){
            if(n==1)
                m=max(m,p[0][i]);
            else
                m=max(m,p[n-1][i]+maxProfit(n-1,i,p,t));    
        }
    }
    return t[n][l]=m;
}
int main()
{
    int n=3;
    vector<vector<int>>p={{1,2,5},
    {3,1,1},{3,3,3}};
    vector<vector<int>>t(n+1,vector<int>(4,-1));
    cout<<maxProfit(n,3,p,t);
}