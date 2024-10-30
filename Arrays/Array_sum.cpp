#include<iostream>
using namespace std;

int main()
{
    int arr[4]={4,6,10,30};
    int sum = 0;
    

    for(int i = 0; i < 4;i++)
    { 
        sum += arr[i];
    }
    cout << sum;
}
