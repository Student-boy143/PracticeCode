#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    
    for (int i = 0;i<5;i++)
    {
        cout << "Enter a number : \n";
        cin >> arr[i];
    }

    for (int i = 0;i<5;i++)
    {
        cout << arr[i]*2 <<" ";
    }
    arr[3] = 77;
    
    for (int i = 0;i<5;i++)
    {
        cout << arr[i]*2 <<" ";
    }

}