#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {2,3,5,8,9,0,2,6,7};

    for(int i = 0;i < 3; i++)
    {
        for(int j = 0;j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}