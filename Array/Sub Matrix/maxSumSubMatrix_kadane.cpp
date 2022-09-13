#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int>&a,int n){
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++){
        curSum+=a[i];
        maxSum=max(curSum,maxSum);
        curSum=curSum<0?0:curSum;
    }
    return maxSum;
}
int maxSumSubMat(vector<vector<int>>&a,int n,int m){
    int maxSum=INT_MIN;
    for(int colStart=0;colStart<m;colStart++){
        vector<int>sum(n,0);
        for(int colEnd=colStart;colEnd<m;colEnd++){
            
            for(int row=0;row<n;row++){
                sum[row]+=a[row][colEnd];
            }
            maxSum=max(maxSum,kadane(sum,n));
        }
    }
    return maxSum;
}
int main(){
    vector<vector<int>>a={
        {1,2,-1,-4,-20},
        {-8,-3,4,-2,1},
        {3,8,9,1,3},
        {-4,-1,1,7,-6},
        {-2,-3,8,1,-1}
    };

    cout<<maxSumSubMat(a,5,5);
    return 0;
}