#include<iostream>
using namespace std;
int main()
{
    int k;
    string s;
    cin>>k>>s;
    int alpha[26]={0};
    int check = 0;
    for(int i=0; i<s.length(); i++)
    {
        alpha[s[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(alpha[i] % k != 0)
        {
            check = -1;
            break;
        }
    }
    if(check == 0)
    {
        int count = k;
        string a = "";
        if(count>0)
        {
            for(int i=0; i<26; i++)
            {
                if(alpha[i]>0)
                {
                    int num = alpha[i]/k;
                    for(int j =0; j<num ; j++)
                    {
                        char c = i+97;
                        a = a + c;
                    }
                }
            }
        }
        string output = "";
        while(count>0)
        {
            count--;
            output = output + a;
        }
        cout<<output;
    }
    else
    {
        cout<<-1;
    }
}