#include<iostream>
using namespace std;

int main()
{
    int arr[4]={2,5,9,7};
    int sum = 1;
    

    for(int i = 0; i < 4;i++)
    { 
        sum *= arr[i];
    }
    cout << sum;
}