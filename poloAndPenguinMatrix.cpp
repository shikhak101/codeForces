#include<iostream>
using namespace std;
int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    int a[n*m];
    int max = 0;
    for(int i=0;i<n*m;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n*m;i++)
    {
        int temp = a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = temp;
    }
    int k = (n*m)/2;
    int moves =0;
    for(int i=0;i<n*m;i++)
    {
        if((a[k]-a[i])%d != 0)
        {
            moves = -1;
            break;
        }
        moves += abs((a[k]-a[i])/d);
        //cout<<moves<<" ";
    }
    cout<<moves;
}