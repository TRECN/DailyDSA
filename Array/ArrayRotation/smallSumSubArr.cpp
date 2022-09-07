#include<bits/stdc++.h>
using namespace std;

int smallSumSubArr(int *arr,int n){
    int minCurr=INT_MAX;
    int minFinal=INT_MAX;

    for(int i=0;i<n;i++){
        if(minCurr>0)
            minCurr=arr[i];
        else
            minCurr+=arr[i];
        
        minFinal=(minFinal>minCurr)? minCurr:minFinal;
    }
    return minFinal;

}

int main()
{
    int arr[] = {3, 2, 2, 4, 9, 7, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Smallest sum: "
         << smallSumSubArr(arr, n);
    return 0;    
}