#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int max_q=0;
    int max_i =0;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        int q = a/m;
        if(a%m != 0) q++;
        if(max_q <= q)
        {
            max_q = q;
            max_i = i;
        }
    }
    cout<<max_i+1;
}