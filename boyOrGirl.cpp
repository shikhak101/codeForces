#include<iostream>
using namespace std;
class boyOrGirl
{
    public:
    int solution(string s)
    {
        int count[26] = {0};
        int output = 0;
        for(int i = 0; i<s.length(); i++)
        {
            if(count[s[i]-97] == 0)
            {
                output++;
                count[s[i]-97] = 1;
            }
        }
        return output;
    }
};

int main()
{
    string s;
    //cout<<"Enter string : ";
    cin>>s;
    boyOrGirl obj;
    int output = obj.solution(s);
    if(output % 2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}