#include<bits/stdc++.h>
using namespace std;
int frog(int n,vector<int>&h){
    if(n==0)
        return 0;
    int one=abs(h[n]-h[n-1])+frog(n-1,h);
    int two=INT_MAX;
    if(n>1)
        two=abs(h[n]-h[n-2])+frog(n-2,h);
    return min(one,two);
}
int main()
{
    int n=4;
    vector<int>h={10, 20, 30, 10};
    cout<<frog(n-1,h);
    return 0;
}