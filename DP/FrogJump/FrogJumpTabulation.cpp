#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    vector<int>h={10, 20, 30, 10};
    vector<int>t(n,0);
    t[0]=0;
    for(int i=1;i<n;i++){
        int one=abs(h[i]-h[i-1])+t[i-1];
        int two=INT_MAX;
        if(i>1)
            two=abs(h[i]-h[i-2])+t[i-2];
        t[i]=min(one,two);
    }
    cout<<t[n-1];
    return 0;
}