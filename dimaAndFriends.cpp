#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fingers = 0;
    for(int i = 0; i<n; i++)
    {
        int m;
        cin>>m;
        fingers += m;
    }
    n = n+1;
    int person = fingers % n;
    int count = 0;
    for(int i = 1; i<=5; i++)
    {
        if((fingers+i)%n != 1) count++;
    }
    cout<<count;
}