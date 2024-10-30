#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: "<<endl;
    cin >> a;
    int arr[a];
    int sq;
    for(int i = 1;i < a;i++)
    {
        // sq =pow(arr[a],2);
        sq = arr[a] *= arr[a];
        cout << sq <<endl;

    }
    // for(int i = 0;i < a;i++)
    // {
    //     cout << sq <<endl;
    // }
    
}
