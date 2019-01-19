#include<iostream>
#include<string>
using namespace std;
class petyaAndStrings
{
    public:
    int solution(string s1, string s2)
    {
        for(int i = 0; i< s1.length(); i++)
        {
            s1[i] = tolower(s1[i]);
            s2[i] = tolower(s2[i]);
        }
        for(int i = 0; i<s1.length(); i++)
        {
            if(s1[i]>s2[i]) return 1;
            if(s1[i]<s2[i]) return -1;
        }
        return 0;
    }
};

int main()
{
    petyaAndStrings obj;
    string s1,s2;
   // cout<<"Enter strings: ";
    cin>>s1>>s2;
    int output = obj.solution(s1,s2);
    cout<<output;
}