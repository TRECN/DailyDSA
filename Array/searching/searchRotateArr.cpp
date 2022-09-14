#include<bits/stdc++.h>
using namespace std;
int searchRotateArr(int *a,int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(a[mid]==k)
            return mid;
        else if(a[low]<=a[mid]){
            if(a[low]<=k&&k<=a[high])
                high=mid-1;
            else
                low=mid+1;
        }
        else{
            if(k>=a[mid]&&k<=a[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[]={4,5,6,7,0,1,2};
    cout<<searchRotateArr(a,7,1);
    return 0;
} 