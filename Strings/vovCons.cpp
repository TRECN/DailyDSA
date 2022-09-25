#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="Rakesh";
    string v="";
    string c="";
    int i=0;
    while(i<a.size()){
        char ch=a[i];
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
            c+=ch;
        else
            v+=ch;
        i++;
    }
    cout<<"vowel: "<<v<<endl<<"consonant: "<<c<<endl;
}