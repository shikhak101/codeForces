#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long fib[1000001];
    fib[0] =0;
    fib[1] =1;
    for(long long i=2; i<=n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        if(fib[i]>=n) break;
    }
    long long check = 0,i,j,k;
    for(i = 0; fib[i]<=n; i++)
    {
        for(j=i; fib[i]+fib[j]<=n; j++)
        {
            for(k=j; fib[i]+fib[j]+fib[k]<=n; k++)
            {
                if(fib[i]+fib[j]+fib[k] == n)
                {
                    check = -1;
                    break;
                }
                
            }
            if(check == -1) break;
        }
        if(check == -1) break;
    }
    cout<<fib[i]<<" "<<fib[j]<<" "<<fib[k];
    
}