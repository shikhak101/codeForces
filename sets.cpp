#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int neg = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] < 0)
        {
            neg++;
        }
    }
    int b[neg];
    int j = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] < 0) b[j++] = arr[i];
    }
    
    //sort
    for(int i = 1; i<neg; i++)
    {
        int item = b[i];
        int j = i-1;
        while(b[j]>item && j>=0)
        {
            b[j+1] = b[j];
            j--;
        }
        b[j+1] = item;
    }
    int profit = 0;
    for(int i = 0; i<neg; i++)
    {
        if(i < m)
            profit += abs(b[i]);
        else break;
    }
    cout<<profit;
}