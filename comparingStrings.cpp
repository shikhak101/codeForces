#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int check = 0;
    int diff = 0;
    char c1s1,c1s2,c2s1,c2s2;
    if(s1.length()!=s2.length()) check = -1;
    else
    {
        for(int i = 0; i<s1.length(); i++)
        {
            if(s1[i] == s2[i]) continue;
            else{
                if(diff==0)
                {
                    c1s1 = s1[i];
                    c1s2 = s2[i];
                    diff++;
                }
                else if(diff == 1)
                {
                    c2s1 = s1[i];
                    c2s2 = s2[i];
                    diff++;
                    if(c1s1 == c2s2 && c2s1 == c1s2)
                    {
                        continue;
                    }
                    else
                    {
                        check = -1;
                        break;
                    }
                }
                else if(diff>1)
                {
                    check = -1;
                    break;
                }

            }
            
        }
    }
    if(check ==  -1 || diff != 2) cout<<"NO";
    else cout<<"YES";
}