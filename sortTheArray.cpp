#include<iostream>
using namespace std;
int reversearr(int a[], int x,int y)
{
    int b[y-x+1];
    int j = 0;
    for(int i = y; i>=x; i--)
    {
        b[j++] = a[i];
    }
    j=0;
    for(int i = x; i<=y; i++)
    {
        a[i] = b[j++];
    }
    return *a;
}
int main()
{
    int n;
    cin>>n;
    int check = 0,x=0,y=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        
    }
    for(int i=1; i<n; i++)
    {
        if(check == 0 && a[i-1]>a[i])
        {
            int j;
            for(j=i-1; j<n-1; j++)
            {
                if(a[j]>=a[j+1]) continue;
                else 
                {
                    break;
                } 
            }
            check = 1;
            
            x = i-1;
            y = j;
            *a = reversearr(a,x,y);
            i = j;
        }
        if(check == 1 && a[i-1]>a[i])
        {
            check = -1;
            break;
        }
    }
    if(check==-1) cout<<"no";
    else if(check == 0) cout<<"yes"<<"\n"<<1<<" "<<1;
    else
    {
        int i;
        for(i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1]) continue;
            else break;
        }
        if(i == n-1)
            cout<<"yes"<<"\n"<<x+1<<" "<<y+1;
        else
            cout<<"no";
    }
}