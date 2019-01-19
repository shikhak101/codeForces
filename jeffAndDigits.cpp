#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int fives = 0;
    int zeros = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 5) fives++;
        else zeros++;
    }
    int sum = 0;
    int maxfive = 0;
    for(int i = fives; i>=1; i--)
    {
        sum = 5*i;
        if(sum % 9 == 0)
        {
            maxfive = i;
            break;
        }
    }
    string maxnum = "";
    if(zeros == 0)
    {
        maxnum = "-1";
    }
    else if(maxfive == 0 && zeros > 0)
    {
        maxnum = '0';
    }
    else if(maxfive > 0)
    {
        long long x = maxfive;
        while(x>0)
        {
            maxnum = maxnum + '5';
            x--;
        }
        x = zeros;
        while(x>0)
        {
            maxnum = maxnum + '0';
            x--;
        }
        
    }
    cout<<maxnum;
}