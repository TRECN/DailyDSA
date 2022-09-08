#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> sumSubarr(int *a,int n, int t){
            int curSum=a[0];
            int l=0,r=0;
            vector<int>ans;
            while(r<n){
                if(curSum==t){
                    ans.push_back(l+1);
                    ans.push_back(r+1);
                    return ans;
                }
                else if(curSum<t){
                    r++;
                    curSum+=a[r];
                }
                else{
                    curSum-=a[l];
                    l++;
                }
            }
            ans.push_back(-1);
            return ans;
        }
};

int main(){
    int a[]={1,3,5,6,2,10};
    Solution ob;
    vector<int>result(ob.sumSubarr(a,6,8));
    for(auto i:result){
        cout<<i<<" ";
    }
}