#include<iostream>
#include<cmath>
#include<algorithm>
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
    int b[n],m=0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(count[a[i]] == 0) 
        {
            num++;
            prevpos[a[i]] = i;
            b[m++] = a[i];
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
            sort(b,b+m);
            
            for(int i = 0; i<m; i++)
            {
                if(pos[b[i]] == -1)
                {
                    continue;
                }
                else if(count[b[i]]>1)
                {
                    cout<<b[i]<<" "<<pos[b[i]]<<"\n";
                }
                else if(count[b[i]] == 1)
                {
                    cout<<b[i]<<" "<<0<<"\n";
                }
            }
        }
        else cout<<0;
    
}