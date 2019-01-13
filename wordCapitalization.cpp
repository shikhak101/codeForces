#include<iostream>
using namespace std;
class wordCapitalization
{
    public:
    string solution(string s)
    {
        if(s[0]>=97)
            s[0] = toupper(s[0]);
        return s;
    }
};
 
int main()
{
    wordCapitalization obj;
    //cout<<"Enter string : ";
    string s;
    cin>>s;
    s = obj.solution(s);
    cout<<s;
}