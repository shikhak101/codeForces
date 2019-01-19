#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long b[n];
    long long min = 1000000000;
    long long max = 0;
    long long maxdiff = 0;
    long long x = 0;
    long long y = 0;
    long long count = 0;
    for(long long i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(long long i = 0; i<n; i++)
    {
        if(min > b[i])
        {
            min = b[i];
            x = 1;
        }
        else if(min == b[i])
        {
            x++;
        }
        if(max < b[i])
        {
            max = b[i];
            y = 1;
        }
        else if(max == b[i])
        {
            y++;
        }
    }
    if(min == max) 
    {
        int temp = x-1;
        count = 0;
        while(temp > 0)
        {
            count += temp;
            temp--;
        }
    }
    else{
        maxdiff = max - min;
        count = x * y;
    }
    cout<<maxdiff<<" "<<count;
}