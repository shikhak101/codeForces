#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i;
    for(i = n-1; i>=0;i--)
    {
        if(a[i]!=a[k-1]){
            break;
        }
    }
    if(i>(k-1)) cout<<-1;
    else cout<<i+1;
    

}