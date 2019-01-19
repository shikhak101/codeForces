#include<iostream>
using namespace std;
int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    if(n-y <= 0) cout<< -1;
    else
    {
        int count = 0;
        int x =k-( y % k);
        int sum = x+y;
        while(sum<=n)
        {
            if(count>0) cout<<" ";
            cout<<x;
            x = x+k;
            sum= x+y;
            count++;
        }
        
        if(count == 0) cout<<-1;
    }
}