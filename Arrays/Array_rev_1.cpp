#include<iostream>
using namespace std;

int main()
{
    int a[] = {2,4,3,5,7,9};
    int n = sizeof(a)/4;

    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    // Reverse
    int i = 0;
    int j = n-1;
    while(i < j)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    cout << endl;

    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    
    
}