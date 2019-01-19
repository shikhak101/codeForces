#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        arr[i] = i+1;
    }
    for(int i=n-1; i>0; i--)
    {
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] =temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        if(i <n-1) cout<<" ";
    }
}