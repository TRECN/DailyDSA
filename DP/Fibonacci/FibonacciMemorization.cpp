#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&t){
    if(n<=1)
        return t[n]=n;
    if(t[n]!=-1)
        return t[n];
    return t[n]=fib(n-1,t)+fib(n-2,t);
}
int main()
{   
    vector<int>t(5+1,-1);
    cout<<fib(5,t);
    return 0;
    
}