#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int maxa = 0;
    int mina = 100;
    int minb = 100;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(maxa < a[i])
        {
            maxa = a[i];
        }
        if(mina > a[i])
        {
            mina = a[i];
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(minb > b[i])
        {
            minb = b[i];
        }
    }
    if(maxa >= minb) cout<<-1;
    else
    {
        if(mina*2 > maxa) 
        {
            if(mina*2 > minb-1) cout<<-1;
            else cout<<mina*2;
        }
        else cout<<maxa;
    }
    //cout<<maxa<<" "<<mina<<" "<<minb;
}