#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&t){
    t[0]=0;
    t[1]=1;
    for(int i=2;i<=n;i++){
        t[i]=t[i-1]+t[i-2];
    }
    return t[n];
}
int main()
{   
    vector<int>t(95+1,-1);
    cout<<fib(95,t);
    return 0;
    
}