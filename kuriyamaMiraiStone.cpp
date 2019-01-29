#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    long long b[3][n];
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        b[1][i] = b[1][i-1]+a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=1;i<=n;i++)
    {
        b[2][i] = b[2][i-1]+a[i];
    }
    long long m;
    cin>>m;
    long long arr[m];
    long long k = 0;
    for(long long i=0;i<m;i++)
    
    {
       // cout<<"--"<<arr[k]<<' ';
        long long type,l,r;
        cin>>type>>l>>r;
        arr[k] = b[type][r]-b[type][l-1];
        k++;
    }
    for(long long i=0; i<m; i++)
    {
        cout<<arr[i]<<"\n";
    }
}