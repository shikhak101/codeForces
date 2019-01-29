#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=2*n;
    int a[n/2],b[n/2];
    string s;
    cin>>s;
    
    for(int i=0; i<n/2; i++)
    {
        // cin>>a[i];
        a[i] = (int)s[i];
    }
    for(int i=0; i<n/2; i++)
    {
        // cin>>b[i];
        b[i] = (int)s[(n/2)+i];
    }
    int i=0;
    sort(a,a+n/2);
    sort(b,b+n/2);
    if(a[0]<b[0])
    {
        for(i=0; i<n/2; i++)
        {
            if(a[i] >= b[i])
            {
                break;
            }
        }
    }
    else if(a[0]>b[0])
    {
        for(i=0; i<n/2; i++)
        {
            if(a[i] <= b[i])
            {
                break;
            }
        }
    }
    
    if(i==n/2) cout<<"YES";
    else cout<<"NO";
}