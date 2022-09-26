#include<bits/stdc++.h>
using namespace std;
int main(){
    
    float d= 1/(2*1.0);
    string a=to_string(d);
    cout<<a<<endl;
    cout<<a.size()<<endl;
    int c=0;
    for(int i=a.size()-1;a[i]==' ';i--){
        cout<<true;
    }
    cout<<c;
}