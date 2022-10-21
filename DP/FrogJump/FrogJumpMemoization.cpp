#include<bits/stdc++.h>
using namespace std;
int frog(int n,vector<int>&h,vector<int>&t){
    if(n==0)
        return t[n]=0;
    if(t[n]!=-1)return t[n];
    int one=abs(h[n]-h[n-1])+frog(n-1,h,t);
    int two=INT_MAX;
    if(n>1)
        two=abs(h[n]-h[n-2])+frog(n-2,h,t);
    return t[n]=min(one,two);
}
int main()
{
    int n=4;
    vector<int>h={10, 20, 30, 10};
    vector<int>t(n,-1);
    cout<<frog(n-1,h,t);
    return 0;
}