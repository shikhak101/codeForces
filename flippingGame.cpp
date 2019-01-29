#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int one = 0;
    int zero = 0;
    int count = 0;
    int max=0;
    int maxone = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 1) one++;
        else zero++;
    }
    for(int i = 0; i<n;i++)
    {
        int temp = one;
        count = 0;
        for(int j=i; j<n;j++)
        {
            if(a[j] == 1)
            {
                temp--;
            }
            else if(a[j] == 0) count ++;
            if(max < count) max = count;
            if(maxone < count+temp) maxone = count + temp;
        }
        
    }
    cout<<maxone;
}