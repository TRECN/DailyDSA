#include<bits/stdc++.h>
using namespace std;

void arrayRotation(int *arr, int n){
    int x=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    arrayRotation(arr,N);
    printArr(arr,N);
    return 0;
}