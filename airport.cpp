#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<m; i++)
    {
        int temp = a[i];
        int j =i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    int minsum = 0;
    int maxsum = 0;
    int passenger = n;
    for(int i = 0; i<m; i++)
    {
        int j = a[i];
        while(j > 0 && passenger > 0)
        {
            minsum += j;
            j--;
            passenger--;
        }
    }
    passenger = n;
    while(passenger > 0)
    {
        int j = a[m-1];
        maxsum += j;
        passenger--;
        a[m-1]--;
        for(int i=1; i<m; i++)
        {
            int temp = a[i];
            int j =i-1;
            while(j>=0 && a[j]>temp)
            {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = temp;
        }
    }
    cout<<maxsum<<" "<<minsum;
}