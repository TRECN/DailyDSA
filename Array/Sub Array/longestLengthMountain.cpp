#include<bits/stdc++.h>
using namespace std;

int longestMountain(int *arr,int n){
    int ans=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            int count=1;
            int l=i;

            while(l>0&&arr[l]>arr[l-1]){
                count++;
                l--;
            }

            int r=i;
            while(r<n-1&&arr[r]>arr[r+1]){
                count++;
                r++;
            }
            ans=max(count,ans);
        }
    }
    return ans;
}

int main(){
    int arr[]={1,3,1,4,3,1};
    cout<<longestMountain(arr,6);
}