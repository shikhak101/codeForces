#include<iostream>
using namespace std;
class stonesOnTable
{
    public:
    int solution(string s)
    {
        int count = 0;
        for(int i = 0; i< s.length()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i+1,1);
                i--;
                count++;
            }
        }
        return count;
    }
};

int main()
{
    stonesOnTable obj;
    //cout<<"Enter number of stones : ";
    int n;
    cin>>n;
    //cout<<"Enter sequence : ";
    string s;
    cin>>s;
    int output = obj.solution(s);
    cout<<output;
}