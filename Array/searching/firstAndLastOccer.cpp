#include<bits/stdc++.h>
using namespace std;

int firstOccer(int *a,int n,int k){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(a[mid]==k){
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>k)
            high=mid-1;
        else
            low=mid+1;
    }
    return ans;
}

int lastOccer(int *a,int n,int k){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(a[mid]==k){
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]>k)
            high=mid-1;
        else
            low=mid+1;
    }
    return ans;
}

pair<int,int>firstAndLastOccer(int *a,int n, int k){
    pair<int, int>p;
    p.first=firstOccer(a,n,k);
    p.second=lastOccer(a,n,k);
    return p;
}

int main(){
    int a[]={1,2,3,3,3,4,5};
    pair<int,int>p=firstAndLastOccer(a,7,3);
    cout<<p.first<<" "<<p.second;
    return 0;
}