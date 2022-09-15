#include<bits/stdc++.h>
using namespace std;
int countSmallorEqualEle(int *a, int n, int k){
    int low=0;
    int high=n-1;
    int count=0;
    while(low<=high){
        int mid=(low+high)>>1;
        if(a[mid]<=k){
            count=mid+1;
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return count;
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    cout<<countSmallorEqualEle(a,7,5);
    return 0;
}