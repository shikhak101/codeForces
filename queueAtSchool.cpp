#include<iostream>
using namespace std;
class queueAtSchool
{
    public:
    string solution(string s, int t)
    {
        int len = s.length();
        string a = s;
        for(int j = 0; j<t; j++)
        {
            for(int i = 0; i < len-1; i++)
            {
                if(s[i]=='B' && s[i+1] == 'G')
                {
                    a[i] = 'G';
                    a[i+1] = 'B';
                }
            }
            s = a;
        }
        return s;
    }
};
int main()
{
    queueAtSchool obj;
    int n,t;
    //cout<<"Enter number of students and time : ";
    cin>>n>>t;
    string s;
    char arr[n];
    //cout<<"Enter initial ordering : ";
    cin>>s;
    string a = obj.solution(s,t);
    cout<<a;
}