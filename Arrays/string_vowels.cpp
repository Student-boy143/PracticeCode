#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s = "Raju is a amazing and intelligent person.";
    
    int count = 0;
    for(int i = 0;i < s.length();i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]=='u')
        {
            count += 1;
        }
        
    }
    cout << count;

}