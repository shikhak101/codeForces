#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count[1001]={0};
    int check = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        count[a[i]]++;
        if(count[a[i]]>((n+1)/2))
        {
            check = -1;
        }
    }
    if(check == -1) cout<<"NO";
    else cout<<"YES";
}