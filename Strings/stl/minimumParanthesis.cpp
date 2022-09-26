#include <bits/stdc++.h> 
using namespace std;
int minimumParentheses(string a) {
    stack<char>s;
    for(int i=0;i<a.size();i++){
        if(s.empty())
            s.push(a[i]);
        else if(s.top()=='('&&a[i]==')')
            s.pop();
        else if(s.top()==')'&&a[i]=='(')
            s.push(a[i]);
        else
            s.push(a[i]);
    }
    if(!s.empty())return s.size();
    return 0;
}
int main(){
    cout<<minimumParentheses("))((())(()");
}