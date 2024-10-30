#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s ="shubman ";
    cout << s << endl;

    reverse(s.begin(),s.begin()+3);
    cout << s << endl;


}