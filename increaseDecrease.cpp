#include<iostream>
using namespace std;
int main()
{
    int n = 0; 
    int max = 1000;
    cin>>n;
    int a[n];
    int sum = 0;
    int neg = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
        if(a[i] < 0) neg = 1;
    }
    if(sum % n == 0) cout<<n;
    else cout<<n-1;
}