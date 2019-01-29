#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d[1000001] = {0};
    for(int i=1; i<=1000000; i++)
    {
        for(int j=i; j<=1000000; j+=i)
        {
            d[j]++;
        }
    }
    int sum = 0;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            for(int k=1; k<=c; k++)
            {
                sum += d[i*j*k];
            }
        }
    }
    cout<<sum;
}