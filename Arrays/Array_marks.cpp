#include<iostream>
using namespace std;

int main()
{
    int a[4][2] = {{24,77},{25,56},{26,88},{27,89}};

    for(int i = 0;i < 4; i++)
    {
        for(int j = 0;j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}