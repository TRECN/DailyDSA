#include <bits/stdc++.h>
using namespace std;
vector<int> printArrayAfterKOperations(vector<int> &arr, int n, int k)
{

    if (k == 0)
        return arr;
    int currMax = *max_element(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        arr[i] = abs(arr[i] - currMax);
    }
    if (k % 2 == 0)
    {
        int currMax = *max_element(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            arr[i] = abs(arr[i] - currMax);
        }
    }
    else
    {
        return arr;
    }

    return arr;
}

int main(){
    vector<int>arr={20,15,10,5};
    arr=printArrayAfterKOperations(arr,4,2);
    for(auto a:arr){
        cout<<a<<" ";
    }
}
