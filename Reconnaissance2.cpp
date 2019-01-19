#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ht[n];
    int mindiff = 1000;
    int x,y;
    for(int i = 0; i<n; i++)
    {
        cin>>ht[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i<n-1)
        {
            int diff = abs(ht[i] - ht[i+1]);
            if(diff < mindiff) 
            {
                mindiff = diff;
                x = i;
                y = i+1;
            }
        }
        else
        {
            int diff = abs(ht[i] - ht[0]);
            if(diff < mindiff)
            {
                mindiff = diff;
                x = i;
                y = 0;
            }
        }
    }
    cout<<x+1<<" "<<y+1;
}