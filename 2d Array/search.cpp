#include <bits/stdc++.h> 
using namespace std;
int sc(vector<int>&a,int n,int t){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)>>1;
        if(t==a[mid])
            return 1;
        else if(a[mid]>t){
            h--;
        }
        else
            l++;
    }
    return 0;
}
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int i=0;
    for(auto a:mat){
        i=sc(a,n,target); 
        if(i==1)
            break;
    }
    return (i)?true:false;
}
int main(){
    vector<vector<int>>m={{1,2,3},
                            {4,5,6}};
    cout<<findTargetInMatrix(m,2,3,9);

}