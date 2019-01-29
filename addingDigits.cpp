#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int check = 0,i;
    for(i = 0; i<n; i++)
    {
        int j;
        for( j = 0; j<=9; j++)
        {
            int temp = a * 10 + j;
            if(temp % b == 0)
            {
                a = temp;
                break;
            }
        }
        if(j==10)
        {
            check = -1;
            break;
        }
        if(j==0)
        {
            check = 2;
            break;
        }
    }
    if(check == -1) cout<<check;
    else if(check == 2)
    {
        string s = to_string(a);
        while(i+1<n)
        {
            s+='0';
            i++;
        }
        cout<<s;
    }
    else cout<<a;
}