#include <bits/stdc++.h> 
using namespace std;
int minPath(int i,int j,vector<vector<int>>& a, int n){
    if(i==n-1)
        return a[i][j];
    return a[i][j]+min(minPath(i+1,j,a,n),minPath(i+1,j+1,a,n));

}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	return minPath(0,0,triangle,n);
}