#include<bits/stdc++.h>
using namespace std;

int firstOccer(int *a,int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)>>1;
        
    }
}

int lastOccer(int *a,int n,int k){
    
}

pair<int,int>firstAndLastOccer(int *a,int n, int k){
    pair<int, int>p;
    p.first=firstOccer(a,n,k);
    p.second=lastOccer(a,n,k);
}

int main(){
    int a[]={1,2,3,3,3,4,5};
    pair<int,int>p=firstAndLastOccer(a,7,3);
    return 0;
}