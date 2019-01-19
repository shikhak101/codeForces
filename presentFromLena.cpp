#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<= n; i++)
    {
        string a="";
        for(int j = 2*(n-i); j> 0; j--)
        {
            cout<<" ";
        }
        for(int j = 0; j<=i; j++)
        {
            cout<<j;
            if(j != i)
                cout<<" ";

        }
        for(int j = i-1; j>=0; j--)
        {
            cout<<" ";
            cout<<j;
        }
        cout<<"\n";
    }
    for(int i = n-1; i>=0; i--)
    {
        for(int j = 2*(n-i); j> 0; j--)
        {
            cout<<" ";
        }
        for(int j = 0; j<=i; j++)
        {
            cout<<j;
            if(j!=i)
                cout<<" ";
        }
        for(int j = i-1; j>=0; j--)
        {
            cout<<" ";
            cout<<j;
        }
        cout<<"\n";
    }
}