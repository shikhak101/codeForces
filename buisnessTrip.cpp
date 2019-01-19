#include<iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int a[12];
    for(int i =0; i<12; i++)
    {
        cin>>a[i];
    }
    for(int i =1; i<12; i++)
    {
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    int sum = 0; 
    int i;
    for(i =11; i>=0; i--)
    {
        sum = sum + a[i];
        if(sum >= k)
        {
            break;
        }
    }
    if(k == 0) cout<<0;
    else if(sum < k) cout<<-1;
    else cout<<12-i;
}