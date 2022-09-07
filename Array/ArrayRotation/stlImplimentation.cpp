#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vect={5,3,2,6,1,8,9,0,7};
    reverse(vect.begin(),vect.end());
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }
    sort(vect.begin(),vect.end());
    if(binary_search(vect.begin(),vect.end(),2)){
        cout<<"found";
    }
    return 0;
}