#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // int output[m],k=0;
    // for(int i=0;i<m;i++)
    // {

    //     int val;
    //     cin>>val;
    //     int count = 0;
    //     int c[100001] = {0};
    //     for(int j=val-1; j<n;j++)
    //     {
    //         if(c[a[j]] == 0)
    //         {
    //             count++;
    //             c[a[j]]++;
    //             //cout<<a[j]<<"--"<<count<<"\n";
    //         }
    //     }
    //     output[k++] = count;
    // }
    // for(int i=0;i<m;i++)
    // {
    //     cout<<output[i]<<"\n";
    // }

    set<int> s;
    for(int i=n-1;i>=0;i--)
    {
        s.insert(a[i]);
        a[i] = s.size();
    }
    int output[m];
    int k = 0;
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        output[k++]=a[val-1];
        
    }
    for(int i = 0; i<m; i++)
    {
        cout<<output[i]<<"\n";
    }
}