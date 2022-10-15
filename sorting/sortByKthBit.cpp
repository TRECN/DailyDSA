#include<bits/stdc++.h>
vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
   
    vector<int>ans;
    for(auto i:arr){
        if((i>>(k-1))%2==0)
            ans.push_back(i);
    }
    for(auto i:arr){
        if((i>>(k-1))%2!=0)
            ans.push_back(i);
    }
    return ans;
}