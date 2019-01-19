#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i =0; i<m; i++)
        cin>>b[i];
        int count =0;
        int max = 0;
    for(int j =0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(b[j] % a[i] == 0)
            {
                if(max < (b[j]/a[i]))
                {
                    count = 1;
                    max = b[j]/a[i];
                }
                else if(max == b[j]/a[i])
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
}