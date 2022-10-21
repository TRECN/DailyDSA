#include<bits/stdc++.h>
using namespace std;
static int t[100];
int fib(int n){
    if(n<=1)
        return t[n]=n;
    if(t[n]!=-1)
        return t[n];
    return t[n]=fib(n-1)+fib(n-2);
}
int main()
{   
    memset(t,-1,sizeof(t));
    cout<<fib(5);
    return 0;
    
}