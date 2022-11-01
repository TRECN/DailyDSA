#include <bits/stdc++.h> 
using namespace std;

int minimumPathSum(vector<vector<int>>& a, int n){
    vector<vector<int>>t(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
        t[n-1][i]=a[n-1][i];
    for(int i=n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
            t[i][j]=a[i][j]+min(t[i+1][j],t[i+1][j+1]);
        }
    }
    return t[0][0];
}