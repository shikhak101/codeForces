#include<iostream>
#include<string>
using namespace std;
class word
{
    public:
    string solution(string s)
    {
        int up = 0, low = 0;
        for(int i = 0; i<s.length();i++)
        {
            int val = s[i];
            if(val<97) up++;
            else low++;
        }

        if(up>low) 
        {
            for(int i = 0; i<s.length(); i++)
            {
                s[i] = toupper(s[i]);
            }
        }
        else 
        {
            for(int i = 0; i<s.length(); i++)
            {
                s[i] = tolower(s[i]);
            }
        }
        return s;
    }
};

int main()
{
    string s;
    //cout<<"Enter String : ";
    cin>>s;
    word obj;
    s = obj.solution(s);
    cout<<s;
}