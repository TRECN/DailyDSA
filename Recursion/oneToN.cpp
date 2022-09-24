#include<bits/stdc++.h>
using namespace std;
void oneN(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    oneN(++i,n);
}
int main(){
    int n=10;
    oneN(1,n);
}