#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n], m[n];
    int maxcount = 0;
    int a[24][60];
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<60;j++)
            a[i][j] =0 ;
    }
    for(int i=0; i<n; i++)
    {
        cin>>h[i]>>m[i];
        a[h[i]][m[i]]++;
        if(maxcount<a[h[i]][m[i]]) maxcount = a[h[i]][m[i]];
    }
    
    
    cout<<maxcount;
}