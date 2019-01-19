#include<iostream>
using namespace std;
class bitLand
{
    public:
    int solution(string arr[], int n)
    {
        int x = 0;
        for(int i = 0; i<n; i++)
        {
            string s = arr[i];
            if(s[0] == '+' || s[1] == '+') ++x;
            else if(s[0] == '-' || s[1] == '-') --x;
        }
        return x;
    }
};

int main()
{
    bitLand obj;
    int n;
    //cout<<"Enter number of operations: ";
    cin>>n;
    string arr[n];
    //cout<<"Enter operations: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x = obj.solution(arr,n);
    cout<<x;
}