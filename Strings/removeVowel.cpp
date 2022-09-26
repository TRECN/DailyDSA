#include <bits/stdc++.h> 
using namespace std;
string removeVowels(string inputString) {
    string ans;
    for(int i=0;i<inputString.size();i++){
        char ch=inputString[i];
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
            ans.push_back(ch);
        }
    }
    return ans;
}
int main(){
    cout<<removeVowels("rishabh");
}