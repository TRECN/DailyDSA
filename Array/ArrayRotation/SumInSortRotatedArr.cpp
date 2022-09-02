#include<bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int arr[],int n, int x){
    int i;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            break;
    }

}

int main()
{
    int arr[] = { 11, 15, 6, 8, 9, 10 };
    int X = 16;
    int N = sizeof(arr) / sizeof(arr[0]);
    if (pairInSortedRotated(arr, N, X))
        cout << "true";
    else
        cout << "false";
  
    return 0;
}



// 1 5 8 2 9 0 7 10
                   
// l=a[0];
// s=a[0];


// for(i=0;i<n;i++){
//     if(a[i]>l){
//         s=l;
//         l=a[i];
//     }
//     else if(a[i]>s){
//         s=a[i];
//     }
// }
// return s;