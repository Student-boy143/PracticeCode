#include<iostream>
using namespace std;

int main()
{
    int arr[] = {8,9,5,5,44,87,24,87,65,64,90,87,0,88,45,86,94};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        // mx = max(mx,arr[i]);
        if (arr[i]>mx) mx = arr[i];
    }
    cout << mx << endl;
}