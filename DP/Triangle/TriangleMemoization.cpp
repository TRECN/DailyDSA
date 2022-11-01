#include <bits/stdc++.h> 
using namespace std;
int minPath(int i,int j,vector<vector<int>>& a, int n,vector<vector<int>>& t){
    if(i==n-1)
        return a[i][j];
    if(t[i][j]!=-1)
        return t[i][j];
    return t[i][j]=a[i][j]+min(minPath(i+1,j,a,n,t),minPath(i+1,j+1,a,n,t));

}
int minimumPathSum(vector<vector<int>>& triangle, int n){
    vector<vector<int>>t(n,vector<int>(n,-1));
	return minPath(0,0,triangle,n,t);
}