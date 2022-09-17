#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
  vector<vector<int>>ans;
     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int sum=arr[i]+arr[j];
//             if(sum==s){
//                 vector<int>que;
//                 que.push_back(min(arr[i],arr[j]));
//                 que.push_back(max(arr[i],arr[j]));
//                 ans.push_back(que);
//             }
//         }
//     }
//     sort(ans.begin(),ans.end());
    
    
//     unordered_map<int,int>mp;
    
//     for(int i=0;i<n;i++){
//         int rem=(s-arr[i]);
//         if(mp.find(rem)!=mp.end()){
//             int count=mp[rem];
//             vector<int>que;
//             que.push_back(min(rem,arr[i]));
//             que.push_back(max(rem,arr[i]));
//             for(int j=0;j<count;j++){
//                 ans.push_back(que);
//             }
//         }
//         mp[arr[i]]++;
//     }
    
    int low =0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==s){
            vector<int>que;
            que.push_back(min(arr[low],arr[high]));
            que.push_back(max(arr[low],arr[high]));
            ans.push_back(que);
            
        }
        else if(arr[low]+arr[high]>s){
            high--;
        }
        else
            low++;
    }
    return ans;
}

