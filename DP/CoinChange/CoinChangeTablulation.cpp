#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3};
    int n=a.size();
    int sum=4;
    vector<vector<int>>t(n+1,vector<int>(sum+1,0));
    for(int i=1;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0&&i>0)
                t[i][j]=1;
            else if(a[i-1]<=j)
                t[i][j]=t[i][j-a[i-1]]+t[i-1][j];
            else 
                t[i][j]=t[i-1][j];
        }
    }
    cout<<t[n][sum];
    
}