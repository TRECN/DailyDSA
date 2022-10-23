#include <bits/stdc++.h> 
using namespace std;
int maxSum(vector<int>&a,int n,vector<int>&t){
    if(n<=0)return 0;
    if(n==1) return t[n]= a[0];
    if(t[n]!=-1)
        return t[n];
    else return t[n]=max(a[n-1]+maxSum(a,n-2,t),maxSum(a,n-1,t));
}
int maximumNonAdjacentSum(vector<int> &nums){
    
    int n=nums.size();
    vector<int>t(n+1,-1);
    return maxSum(nums,n,t);
}

int main(){
    vector<int>a={2, 1, 4, 9};
    cout<<maximumNonAdjacentSum(a);
}