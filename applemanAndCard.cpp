#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    long long sum = 0;
    long long count[27];
    for(long long i=0;i<27; i++) count[i]=0;
    long long len =0;
    for(long long i=0; i<n; i++)
    {
        if((count[s[i]-65])==0) len++;
        count[s[i]-65]++;
     }
    long long arr[len];
    long long j=0;
    for(long long i=0; i<27; i++)
    {
        if(count[i]>0) arr[j++] = count[i];
    }
    for(long long i=1; i<len; i++)
    {
        long long temp = arr[i];
        long long x =i-1;
        while(arr[x]<=temp && x>=0)
        {
            arr[x+1]=arr[x];
            x--;
        }
        arr[x+1]=temp;
    }
    long long x = 0;
    while(k>0)
    {
        if(k<arr[x])
        {
            //cout<<sum<<" "<<k<<" "<<arr[x]<<"\n";
            sum = sum + (k*k);
            k = 0;
        }
        else
        {
            sum += arr[x] * arr[x];
            k = k - arr[x];
        }
        x++;
    }
    cout<<sum;
}