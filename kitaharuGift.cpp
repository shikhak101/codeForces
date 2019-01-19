#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int one = 0, two = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 100) one++;
        else two++;
    }
    int reqd1 = 2 * (two % 2);
    if(reqd1 > one) cout<<"NO";
    else{
        int temp1 = (one - reqd1) % 2;
        if(temp1 == 0 ) cout<<"YES";
        else cout<<"NO";
    }
}