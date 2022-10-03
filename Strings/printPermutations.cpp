#include<bits/stdc++.h>
using namespace std;
void printP(string &a,int i){
    if(i==a.size()){
        cout<<a<<endl;
        return;
    }
    for(int j=i;j<a.size();j++){
        swap(a[i],a[j]);
        printP(a,i+1);
        swap(a[i],a[j]);
    }
}
int main(){
    string a="abc";
    printP(a,0);
}