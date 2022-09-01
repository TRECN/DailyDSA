#include<bits/stdc++.h>
using namespace std;

void reverse(int *arr,int s,int e){
    while(s<e){
        int t=arr[s];
        arr[s]=arr[e];
        arr[e]=t;
        s++;
        e--;
    }

}
void arrayRotation(int *arr,int d, int n){
    if(d==0)
        return;
    
    d=d%n;

    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
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
    arrayRotation(arr,d,N);
    printArr(arr,N);
    return 0;
}