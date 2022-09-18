#include<bits/stdc++.h>
using namespace std;
//brute force
// bool isValidPair(vector<int> &a, int n, int k, int m)
// {
//     if(n%2==1)
//         return false;

//     for(int i=0;i<n;i++){
//         if(a[i]==-1)
//             continue;
//         for(int j=i+1;j<n;j++){
//             if(a[j]==-1)
//                 continue;
//             if((a[j]+a[i])%k==m){
//                 a[j]=-1;
//                 a[i]=-1;
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]!=-1)
//             return false;
//     }
//     return true;
// }

//optimized
bool isValidPair(vector<int> &a, int n, int k, int m)
{
    if(n%2==1)
        return false;
    
    unordered_map<int, int>mp;

    for(int i=0;i<n;i++){
        mp[a[i]%k]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        int A=it->first;
        int x=(m-A+k)%k;
        if(mp[x]!=mp[A])
            return false;
    }
    return true;
    
}

int main(){
    vector<int>a={2,1,5,7};
    cout<<isValidPair(a,4,9,3);
    return 0;
}