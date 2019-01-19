#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int output = 0;
    string s = to_string(num);
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == '1')
        {
            if(i<s.length()-1)
            {
                i++;
                if(s[i] == '4')
                {
                    if(i<s.length()-1)
                    {
                        i++;
                        if(s[i] == '4')
                        {
                            continue;
                        }
                        else if(s[i] == '1')
                        {
                            i--;
                            continue;
                        }
                        else{
                            output = -1;
                            break;
                        }
                    }
                }
                else if(s[i] == '1')
                {
                    i--;
                    continue;
                }
                else{
                    output = -1;
                    break;
                }
            }
        }
        else{
            output = -1;
            break;
        }
        
    }
    if(output == 0) cout<<"YES";
    else cout<<"NO";
}