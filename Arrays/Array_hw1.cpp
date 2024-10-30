#include<iostream>
using namespace std;

int main()
{
    int arr[] = { 3,5,9,7,2,77,84,35};
    int x = 10;
    int count = 0;
    for(int i = 0;i < 8;i++)
    {
        if(arr[i] > x) 
        {
        count++;
        }
    }
    cout << count++  <<endl;
}   
