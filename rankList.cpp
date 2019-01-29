#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int p[n+1],t[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>p[i]>>t[i];
    }
    for(int i=2; i<n+1; i++)
    {
        int j = i-1;
        int temp1 = p[i];
        int temp2 = t[i];
        while(p[j] < temp1 && j>=1)
        {
            p[j+1] = p[j];
            t[j+1] = t[j];
            j--;
        }
        p[j+1] = temp1;
        t[j+1] = temp2;
    }
    // cout<<"Ordered"<<"\n";
    // for(int i=0; i<n+1; i++)
    // {
    //     cout<<i<<"--"<<p[i]<<" "<<t[i]<<"\n";
    // }
    int i = k; 
    int j = k;
    while(i>1 && p[k] == p[i-1]) i--;
    while(j<n && p[k] == p[j+1]) j++;
    for(int l=i+1; l<=j; l++)
    {
        int m = l-1;
        int temp = t[l];
        while(t[m] > temp && m>=i)
        {
            t[m+1] = t[m];
            m--;
        }
        t[m+1] = temp;
    }
    // cout<<"Ordered1"<<"\n";
    // for(int l=i; l<=j; l++)
    // {
    //     cout<<l<<"--"<<p[l]<<" "<<t[l]<<"\n";
    // }
    int count = 0;
    int pos = k;
    while(i<=j)
    {
        if(p[i] == p[pos] && t[i] == t[pos]) 
        {

            count++;
            //cout<<p[i]<<"->"<<t[i]<<i<<"\n";
        }
        i++;
    }
    cout<<count;
}