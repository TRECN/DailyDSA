#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int l = 1;
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);
        if (arr[i] > arr[i + 1] && i < n - 1)
            swap(arr[i], arr[i + 1]);
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}