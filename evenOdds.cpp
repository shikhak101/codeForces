#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long pos = k;
    long long output = 0;
    if(n % 2 == 0)
    {
        if(k > n/2)
        {
            pos = k - (n/2);
            output = pos * 2;
        }
        else{
            output = (k * 2) - 1;
        }
    }
    else
    {
        if(k > (n/2)+1)
        {
            pos = k - (n/2) - 1;
            output = pos*2;
        }
        else{
            output = (k * 2) - 1;
        }
    }
    cout<<output;
}