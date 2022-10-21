#include<bits/stdc++.h>
using namespace std;
static int t[1000][1000];
int minimum(int a,int b,int c){
    return min(a,min(b,c));
}
int minCostPath(int cost[3][3],int m,int n){
    if(m<0||n<0)
        return INT_MAX;
    if(t[m][n]!=-1)
        return t[m][n];
    else if(n==0&&m==0){
        return t[m][n]=cost[m][n];
    }
    else {
        return t[m][n]=cost[m][n]+minimum(minCostPath(cost,m-1,n-1),minCostPath(cost,m-1,n),minCostPath(cost,m,n-1));
    }
}

int main(){
    int cost[3][3]={{1,2,3},
                    {4,8,2},
                    {1,5,3}};
    memset(t,-1,sizeof(t));
    cout<<minCostPath(cost,2,2)<<endl;
}