#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin,s);
    cout << s << endl;
    for(int i = 0; i < s.length();i++)
    {
        if(i % 2 == 0) 
        {
            s[i] = 'a';
        }
    }
    cout << s <<" ";
}