#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a = "";
    for(int i =0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            a = a + '.' + s[i];
        }
    }
    cout<<a;
}