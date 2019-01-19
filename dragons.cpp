#include<iostream>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    int min = 1000;
    for(int i =0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        if(min > x[i]) min = x[i];
    }
    if(min >= s) cout<<"NO";
    else
    {
        int check = 1;
        for(int i=1; i<n; i++)
        {
            int tempx = x[i];
            int tempy = y[i];
            int j = i-1;
            while(j >= 0 && x[j] > tempx)
            {
                x[j+1] = x[j];
                y[j+1] = y[j];
                j--;
            }
            x[j+1] = tempx;
            y[j+1] = tempy;
        }
        int currs = s;
        for(int i =0; i<n; i++)
        {
            if(x[i] >= currs)
            {
                check = 0; 
                break;
            }
            else
            {
                currs += y[i];
            }
        }
        if(check == 0) cout<<"NO";
        else cout<<"YES";
    }

}