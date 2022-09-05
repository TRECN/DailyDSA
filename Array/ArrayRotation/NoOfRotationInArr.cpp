#include<bits/stdc++.h>
using namespace std;

int noOfRotations(int *arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            return i+1;
    }
    return 0;
}

int main()
{
    int arr[] = { 15, 18, 2, 3, 6, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << noOfRotations(arr, n);
    return 0;
}