#include<bits/stdc++.h>
using namespace std;

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
    long long maxSum = -1e15;
    long long curSum = 0; 
  
    for (int i = 0; i < n * k; i++) 
    { 
        curSum += arr[i % n]; 
  
        maxSum = max(maxSum, curSum);
  
        if (curSum < 0)
        {
            curSum = 0;
        } 
    } 

    return maxSum; 
}
int main(){
    vector<int>v={23 ,44 ,6, 12};
    vector<int>a;
    
}