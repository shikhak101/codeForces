#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int oddx = 0;
    int oddy = 0;
    int sameodd = 0;
    int extraodd = 0;
    int a[n][2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]%2 == 0 && a[i][1]%2 == 0) continue;
        if(a[i][0] % 2 != 0)
        {
            oddx++;
        }
        if(a[i][1] % 2 != 0)
        {
            oddy++;
        }
        if(a[i][0]%2 != 0 && a[i][1]%2 != 0)
        {
            sameodd++;
        }
    }
    
    if(oddx == sameodd && sameodd != 0 && oddy == sameodd && oddx%2 != 0)
    {
        cout<<-1;
    }
    else
    {
        if(oddx % 2 == 0 && oddy % 2 == 0) cout<<0;
        else if(abs(oddx-oddy) % 2 == 0) cout<<1;
        else if(abs(oddx-oddy) % 2== 1) cout<<-1;
    }
}