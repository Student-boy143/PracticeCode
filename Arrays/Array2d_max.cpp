#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<limits.h>
using namespace std;

int main()
{
    int a[4][2] = {{56,87},{77,66},{34,88},{12,90}};
    int mx = INT_MIN;

    for(int i = 0;i < 4; i++)
    {
        for(int j = 0;j < 2; j++)
        {
            mx = max(mx,a[i][j]);
        }
    }
    cout << mx ;
}