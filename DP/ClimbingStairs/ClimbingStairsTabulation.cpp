#include<bits/stdc++.h>
using namespace std;
int main()
{   int n=3;
    vector<int>t(n+1,-1);
    t[0]=1;
    t[1]=1;
    for(int i=2;i<=n;i++){
        t[i]=t[i-1]+t[i-2];
    }
    cout<<t[n];
    
    return 0;
}