#include <bits/stdc++.h> 
using namespace std;
string leftRotate(string str, int d) {
    string ans="";
    for(int i=d;i<str.size();i++){
        ans+=str[i];
    }
    for(int i=0;i<d;i++){
        ans+=str[i];
    }
    return ans;
}

string rightRotate(string str, int d) {
    string ans="";
    for(int i=str.size()-d;i<str.size();i++){
        ans+=str[i];
    }
    for(int i=0;i<str.size()-d;i++){
        ans+=str[i];
    }
    return ans;
}
    
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int d;
        cin>>d;
        cout<<leftRotate(s,d)<<" ";
        cout<<rightRotate(s,d)<<endl;        
    }
}