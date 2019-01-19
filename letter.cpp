#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    int check =0;
    int alpha1[123]={0};
    int alpha2[123] = {0};
    int i;
    for(i = 0; i<s1.length();i++)
    {
        if(s1[i] == ' ') continue;
        alpha1[s1[i]]++;
    }
    for(int j=0; j<s2.length(); j++)
    {
        if(s2[j] == ' ') continue;
        alpha2[s2[j]]++;
    }
    
    for(int k=0; k<123; k++)
    {
        if(alpha2[k] > alpha1[k])
        {
            check = -1;
            break;
        }
    }
    if(check == 0) cout<<"YES";
    else cout<<"NO";
}