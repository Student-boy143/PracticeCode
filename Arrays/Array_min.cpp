#include<iostream>
using namespace std;

int main()
{
    int arr[] = {8,9,5,5,44,87,24,87,65,-7,64,90,87,0,88,45,86,94};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
         // mn = min(mn,arr[i]);
        if (arr[i]<mn) mn = arr[i];
    }
    cout << mn << endl;
}