#include<bits/stdc++.h>
using namespace std;

void toh(int n,int s, int h,int d){
    if (n==0){
        return;
    }
    toh(n-1,s,d,h);
    cout<<s<<" to "<<d<<endl;
    toh(n-1,h,s,d);
}

int main(){
    int n=4;
    toh(n,1,2,3);
}