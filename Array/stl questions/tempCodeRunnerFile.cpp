#include<bits/stdc++.h>
using namespace std;
bool isValidPair(vector<int> &a, int n, int k, int m)
{
    if(n%2==1)
        return false;

    for(int i=0;i<n;i++){
        if(a[i]==-1)
            continue;
        for(int j=i+1;j<n;j++){
            if(a[j]==-1)
                continue;
            if((a[j]+a[i])%k==m){
                a[j]=-1;
                a[i]=-1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=-1)
            return false;
    }
    return true;
}


int main(){
    vector<int>a={2,1,5,7,8};
    cout<<isValidPair(a,5,9,3);
    return 0;
}