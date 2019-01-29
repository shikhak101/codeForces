#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; 
    int count = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            int c = sqrt((i*i)+(j*j));
            if(c <= n && c >= j && c*c == (i*i)+(j*j)) 
            {
                //cout<<i<<" "<<j<<"\n";
                count++;
            }
        }
    }
    cout<<count;
}