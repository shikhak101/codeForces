#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[m];
    long long output = 0;
    for(long long i = 0; i<m; i++)
    {
        cin>>arr[i];
    }
    output = arr[0]-1;
    for(long long i = 1; i<m; i++)
    {
        if(arr[i] >= arr[i-1])
        {
            output += arr[i] - arr[i-1];
        }
        else
        {
            output += (n - arr[i-1]) + arr[i];
        }
    }
    cout<<output;
}