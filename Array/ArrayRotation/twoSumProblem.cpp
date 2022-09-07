#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&nums,int target){
    vector<int>ans;
    unordered_map <int,int>mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end()){
            ans.push_back(mp[target-nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mp[nums[i]]=i;
    }
    return ans;

}

int main(){
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    vector<int>sum(twoSum(nums,9));
    cout<<"{"<<sum[0]<<","<<sum[1]<<"}";
}
// 2,7,11,15