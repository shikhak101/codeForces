#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    long long x[100000];
    //cout<<"Enter size of array : ";
    cin>>n;
    long long a;
    //cout<<"Enter a values: ";
    for(long long i = 0; i<n; i++)
    {
        cin>>a;
        x[a] = i;
    }
    //cout<<"Enter number of queries: ";
    cin>>m;
    long long b;
    //cout<<"Enter b values: ";
    long long comp1 = 0;
    long long comp2 = 0;
    for(long long i = 0; i<m; i++)
    {
        cin>>b;
        long long temp = x[b]+1;
        comp1 += temp;
        comp2 += n + 1 - temp;
    }
    
    cout<<comp1<<" "<<comp2;
}