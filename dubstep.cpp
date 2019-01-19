#include<iostream>
#include<string>
#include<locale>
#include <algorithm> 
#include <functional> 
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a;
    int numspace = 0;
    int space = 0;
    for(int i =0; i<s.length(); i++)
    {
        if(s[i]=='W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i = i+2;
            if(space == 1)
            {
                a = a + ' ';
                space = 0;
                numspace++;
            }
        }
        else
        {
            a = a + s[i];
            space = 1;
            numspace = 0;
        }
    }
    int len = a.length() - numspace;
    a = a.substr(0,len);
    cout<<a;
}