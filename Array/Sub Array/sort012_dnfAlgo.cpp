#include<bits/stdc++.h>
using namespace std;
void sort012(int *a,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else if(a[mid]==1)
            mid++;
        else if(a[mid]==2){
            swap(a[mid],a[high]);
            high--;
        }
    }
}
int main(){
    int a[]={0,2,1,1,2,1,2,0,0};
    sort012(a,9);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}