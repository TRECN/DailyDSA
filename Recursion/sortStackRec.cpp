#include<bits/stdc++.h>
using namespace std;
void insertE(stack<int>&s,int temp){
    if(s.empty()||s.top()<=temp){
        s.push(temp);
        return;
    }
    int x=s.top();
    s.pop();
    insertE(s,temp);
    s.push(x);
}
void sortt(stack<int>&s){
    if(s.empty())
        return;
    int temp=s.top();
    s.pop();
    sortt(s);
    insertE(s,temp);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(2);
    sortt(s);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
};