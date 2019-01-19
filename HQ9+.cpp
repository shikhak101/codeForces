#include<iostream>
using namespace std;
class HQ9
{
    public:
    int solution(string s)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='H'|| s[i]=='Q' || s[i]=='9') return 1;
        }
        return 0;
    }
};

int main()
{
    HQ9 obj;
    string s;
    //cout<<"Enter string : ";
    cin>>s;
    int output = obj.solution(s);
    if(output == 1) cout<<"YES";
    else cout<<"NO";
}