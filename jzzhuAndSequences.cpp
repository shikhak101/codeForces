#include<iostream>
using namespace std;
int main()
{
    long long x,y,n,m=1000000007;
    cin>>x>>y;
    cin>>n;
    long long c[6]={x-y,x,y,y-x,-x,-y};
    cout<<(c[n%6]+2*m)%m;
}