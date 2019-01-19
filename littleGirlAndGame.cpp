#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int odd = 0;
    int a[26] = {0};
    for(int i =0; i<s.length(); i++)
    {
        a[s[i]-97]++;
    }
    for(int i = 0; i<26; i++)
    {
        if(a[i] % 2 != 0) odd++;
    }
    if(odd % 2 == 1 || odd==0) cout<<"First";
    else cout<<"Second";
}