#include<iostream>
using namespace std;
class borze
{
    public:
    string solution(string s)
    {
        int len = s.length();
        string output = "";
        for(int i = 0; i<len ; i++)
        {
            if(s[i]=='.')
            {
                output += '0';
            }
            else if(s[i] == '-')
            {
                i++;
                if(s[i]=='.')
                {
                    output += '1';
                }
                else if(s[i] == '-')
                {
                    output += '2';
                }
            }
        }
        return output;
    }
};

int main()
{
    borze obj;
    //cout<<"Enetr the borze code : ";
    string s;
    cin>>s;
    string output = obj.solution(s);
    cout<<output;
}
