#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count[100000] = {0};
    int pos[100000] = {0};
    int prevpos[100000] = {0};
    int num = 0;
    int check = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(count[a[i]] == 0) 
        {
            num++;
            prevpos[a[i]] = i;
        }
        else if (count[a[i]] == 1)
        {
            pos[a[i]] = i - prevpos[a[i]];
            prevpos[a[i]] = i;
        }
        else if(count[a[i]] > 1 && pos[a[i]] != -1)
        {
            int temp = pos[a[i]];
            pos[a[i]] = i - prevpos[a[i]];
            prevpos[a[i]] = i;
            if(temp != pos[a[i]]) 
            {
                pos[a[i]] = -1;
                num--;
            }
        }
        
        count[a[i]]++;
    }
    
        if(num > 0)
        {
            cout<<num<<"\n";
            for(int i = 1; i< n; i++)
            {
                int temp = a[i];
                int j = i-1;
                while(j>=0 && a[j]> temp)
                {
                    a[j+1] = a[j];
                    j--;
                }
                a[j+1] = temp;
            }
            for(int i = 0; i<n; i++)
            {
                if(pos[a[i]] == -1)
                {
                    continue;
                }
                else if(count[a[i]]>1)
                {
                    cout<<a[i]<<" "<<pos[a[i]]<<"\n";
                    count[a[i]] = 0;
                }
                else if(count[a[i]] == 1)
                {
                    cout<<a[i]<<" "<<0<<"\n";
                    count[a[i]] = 0;
                }
            }
        }
        else cout<<0;
    
}