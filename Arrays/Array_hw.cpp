#include<iostream>
using namespace std;

int main()
{
    int arr[5] = { 1,2,3,4,5};
    
    for (int i = 0;i < 5;i++)
    {
        if(i % 2 == 0)
        {
          arr[i] += 10;
        }
        if(i % 2 != 0)
        {
          arr[i] *= 2;
        }
        cout << arr[i] <<endl;
    }
   
}