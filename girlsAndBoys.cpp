#include<iostream>
#include<string>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int count = 0;
    int extra=0;
    string temp;
    char extrachar;
    if(n>m)
    {
        temp = "BG";
        count = m;
        extra = n;
        extrachar = 'B';
    }
    else
    {
        count = n;
        extra = m;
        temp = "GB";
        extrachar = 'G';
    }
    string s;
    for(int i=1; i<=count; i++) s += temp;
    int a = extra - count;
    s.insert(s.length(),a,extrachar);
    cout<<s;
}