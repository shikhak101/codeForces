#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 1;
    int check = 0;
    char c = s[0];
    for(int i =1; i<s.length(); i++)
    {
        if(s[i] == s[i-1])
        {
            count++;
            if(count == 7)
            {
                check = 1;
                break;
            }
        }
        else count = 1;
    }
    if(check == 1) cout<<"YES";
    else cout<<"NO";
}