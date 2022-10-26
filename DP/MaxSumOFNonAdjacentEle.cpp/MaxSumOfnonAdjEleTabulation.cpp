#include <bits/stdc++.h> 
using namespace std;
int maximumNonAdjacentSum(vector<int> &a){
    int n=a.size();
    vector<int>t(n+1,0);
    t[0]=0;
    t[1]=a[0];
    for(int i=2;i<n+1;i++){
        t[i]=max(a[i-1]+t[i-2],t[i-1]);
    }
    return t[n];
}

int main(){
    vector<int>a={2, 1, 4, 9};
    cout<<maximumNonAdjacentSum(a);
}