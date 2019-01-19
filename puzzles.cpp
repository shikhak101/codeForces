#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int f[m];
    for(int i = 0; i<m; i++)
        cin>>f[i];
    for(int i=1; i<m; i++)
    {
        int temp =f[i];
        int j = i-1;
        while(j>=0 && f[j]>temp)
        {
            f[j+1] = f[j];
            j--;
        }
        f[j+1] = temp;
    }
    int mindiff = f[m-1] - f[0];
    for(int i=0; i<=m-n; i++)
    {
        int diff = f[i+n-1] - f[i];
        if(mindiff > diff) mindiff = diff; 
        //cout<<mindiff<<" ";
    }
    cout<<mindiff;
}