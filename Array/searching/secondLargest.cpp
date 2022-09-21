#include<bits/stdc++.h>
using namespace std;
int secondLargest(int *a,int n){
    int larg=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(larg<a[i]){
            second=larg;
            larg=a[i];
        }
        else if(larg!=a[i]&&second<a[i]){
            second=a[i];
        }
    }
    if(second!=INT_MIN)
        return second;
    else return -1;
}
int main(){
    int a[]={2,5,6,7,5,8,2,4,7};
    cout<<secondLargest(a,9);
    return 0;
}