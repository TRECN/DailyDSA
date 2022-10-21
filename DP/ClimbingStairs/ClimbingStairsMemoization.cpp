#include<bits/stdc++.h>
using namespace std;
int climb(int n,vector<int>&t){
    if(n==0||n==1) return t[n]=1;
    return t[n]=climb(n-1,t)+climb(n-2,t);
}
int main()
{   int n=3;
    vector<int>t(n+1,-1);
    cout<<climb(n,t);
    return 0;
}