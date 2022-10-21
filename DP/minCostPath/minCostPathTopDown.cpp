#include<bits/stdc++.h>
using namespace std;
int minimum(int a,int b,int c){
    return min(a,min(b,c));
}
int minCostPath(int cost[3][3],int m,int n){
    int t[4][4];
    for(int i=0;i<=4;i++){
        t[i][0]=INT_MAX;
    }
    for(int j=0;j<=4;j++){
        t[0][j]=INT_MAX;
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=m;j++){
            int ad=minimum(t[i][j],t[i+1][j],t[i][j+1]);
            t[i+1][j+1]=cost[i][j]+(ad==INT_MAX?0:ad);
        }
    }
    return t[m+1][n+1];
}

int main(){
    int cost[3][3]={{1,2,3},
                    {4,8,2},
                    {1,5,3}};
    cout<<minCostPath(cost,2,2)<<endl;
}