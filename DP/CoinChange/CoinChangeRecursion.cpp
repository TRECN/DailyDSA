#include<bits/stdc++.h>
using namespace std;
int count(vector<int>&coins,int n,int sum){
    if(sum==0)
        return 1;
    if(n<=0)
        return 0;
    if(coins[n-1]<=sum)
        return count(coins,n,sum-coins[n-1])+count(coins,n-1,sum);
    return count(coins,n-1,sum);
}
int main(){
    vector<int> coins={1,2,3};
    int n=coins.size();
    int sum=4;
    cout<<count(coins,n,sum);
}