#include<iostream>
#include<string>
using namespace std;
class tooLongWords
{
    public:
    string solution(string s)
    {
        int len = s.length();
        string a ="";
        a.append(s,0,1);
        string c = to_string(len-2);
        a.append(c);
        a.append(s,len-1,1);
        return a;
    }
};

int main()
{
    tooLongWords obj;
    int n;
    //cout<<"Enter value : ";
    cin>>n;
    //cout<<"Enter strings: ";
    string str[n];
    for(int i = 0; i<n; i++)
    {
        cin>>str[i];
    }
    for(int i =0; i<n; i++)
    {
        string a = "";
        if(str[i].length() > 10)
        {
            a = obj.solution(str[i]);
        }
        else{
            a = str[i];
        }
        cout<<a<<"\n";
    }
}