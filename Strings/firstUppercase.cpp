#include<bits/stdc++.h>
using namespace std;
string firstUppercase(string s){
    s[0]=toupper(s[0]);
    int i=1;
    while(i<s.size()-1){
        if(s[i]==' '){
            s[i+1]=toupper(s[i+1]);
        }
        i++;
    }
    return s;
}
int main(){
    string s="good morning every one";
    cout<<firstUppercase(s);
}