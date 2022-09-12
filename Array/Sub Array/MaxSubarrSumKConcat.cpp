#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={23 ,44 ,6, 12};
    vector<int>a;
    int k=2;
    while(k--)
        a.insert(a.end(),v.begin(),v.end());

    for(auto i:a)
        cout<<i<<" ";
}