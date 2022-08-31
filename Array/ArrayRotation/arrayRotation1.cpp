#include<bits/stdc++.h>
using namespace std;

void arrayRotation(int arr[],int d, int n){
    while(d--){
        int temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }

}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    arrayRotation(arr,d,N);
    printArr(arr,N);
    return 0;
}