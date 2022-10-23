#include <bits/stdc++.h> 
int maxSum(vector<int>&a,int n){
    if(n<=0)return 0;
    if(n==1) a[0];
    
    else return max(a[n-1]+maxSum(a,n-2,t),maxSum(a,n-1,t));
}
int maximumNonAdjacentSum(vector<int> &nums){
    
    int n=nums.size();

    return maxSum(nums,n,);
}