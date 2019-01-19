#include<iostream>
using namespace std;
class amusingJoke
{
    public:
    int solution(string s1, string s2, string s3)
    {
        int counter[26] = {0};
        for(int i=0;i<s1.length(); i++)
        {
            counter[s1[i]-65]++;
        }
        for(int i=0;i<s2.length(); i++)
        {
            counter[s2[i]-65]++;
        }
        for(int i = 0; i<s3.length(); i++)
        {
            if(counter[s3[i]-65] == 0)
            {
                return -1;
            }
            counter[s3[i]-65]--;

        }
        for(int i = 0; i<26; i++)
        {
            if(counter[i] != 0)
            {
                return -1;
            }
        }
        return 1;
    }
};

int main()
{
    amusingJoke obj;
    string s1,s2,s3;
    //cout<<"Enter s1,s2,s3: ";
    cin>>s1>>s2>>s3;
    int output = obj.solution(s1,s2,s3);
    if(output == -1) cout<<"NO";
    else cout<<"YES";
}