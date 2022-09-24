#include<bits/stdc++.h>
using namespace std;
void oneN(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    oneN(n-1);
    cout<<n<<endl;
    
}
int main(){
    int n=10;
    oneN(n);
}