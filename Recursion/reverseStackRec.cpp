#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int temp){
    if(s.empty()){
        s.push(temp);
        return;
    }
    int x=s.top();
    s.pop();
    insert(s,temp);
    s.push(x);
}
void rev(stack<int>&s){
    if(s.empty())
        return;
    int temp=s.top();
    s.pop();
    rev(s);
    insert(s,temp);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    rev(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}