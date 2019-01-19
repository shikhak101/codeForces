#include<iostream>
using namespace std;
int main()
{
    int check = 0;
    string s,t;
    cin>>s>>t;
    if(s.length() != t.length())
    {
        cout<<"NO";
    }
    else
    {
        int len = s.length()-1;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] != t[len-i])
            {
                check = -1;
                break;
            }
        }
        if(check == 0) cout<<"YES";
        else cout<<"NO";
    }
    
}