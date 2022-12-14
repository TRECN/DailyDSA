#include<bits/stdc++.h>
using namespace std;

int t[2000][2000];

int subsetSum(int a[],int n,int k){
    if(k==0)
        return 1;
    if(n==0)
        return 0;
    
    if(t[n][k]!=-1)
        return t[n][k];

    if(a[n-1]>k)
        return t[n][k]=subsetSum(a,n-1,k);

    return t[n][k]=subsetSum(a,n-1,k)||subsetSum(a,n-1,k-a[n-1]);    
}


int main()
{
    memset(t, -1, sizeof(t));
    int n = 5;
    int a[] = {1, 5, 1, 1, 1};
    int sum = 12;
  
    if (subsetSum(a, n, sum))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    
}