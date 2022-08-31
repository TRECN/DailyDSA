#include<bits/stdc++.h>
using namespace std;

void arrayRotation(int arr[],int d, int n){
    int temp[n];
    int c=0;

    for(int i=d;i<n;i++){
        temp[c]=arr[i];
        c++;
    }
    for(int i=0;i<d;i++){
        temp[c]=arr[i];
        c++;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }


}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
 
    return 0;
}