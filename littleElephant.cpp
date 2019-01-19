#include<iostream>
using namespace std;
int main()
{
    
    string s;
    int n;
    cin>>s;
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i] == '0')
        {
            break;
        }
    }
    if(i == s.length())
    {
        s.erase(i-1,1);
    }
    else
    {
        s.erase(i,1);
    }
    cout<<s;

}