#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n=3;
    vector<vector<int>>p={{1,2,5},
    {3,1,1},{3,3,3}};
    vector<vector<int>>t(n,vector<int>(4,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                if(k!=j){
                    if(i==0)
                        t[i][j]=max(t[i][j],p[0][k]);
                    else 
                        t[i][j]=max(t[i][j],p[i][k]+t[i-1][k]);
                }
            }
        }
    }
    cout<<t[n-1][3];
    
    return 0;
}