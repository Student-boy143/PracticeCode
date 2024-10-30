#include<iostream>
using namespace std;

void change(int arr[])
    
{
    arr[0] = 7;
}
int main()
{
    int arr[3] = {3,7,9};
    for(int i = 0;i < 3;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr);
    for(int i = 0;i < 3;i++)
    {
        cout << arr[i] << " ";
    }

}

