#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // long long n;
    // cin>>n;
    // long long a[n];
    // string s[n];
    // long long k=0;
    // for(long long i=0;i<n;i++)
    // {
    //     cin>>a[i];
    //     long long c = sqrt(a[i]);
    //         long long j;
    //         for(j=2;j*j<c;j++)
    //         {
    //             if(a[i]%j == 0)
    //             {
    //                 break;
    //             }
    //         }
    //         if(a[i] >1 && j*j > c && c*c==a[i]) s[k++] = "YES";
    //         else s[k++]="NO";

    // }
    // for(long long i=0;i<n;i++)cout<<s[i]<<"\n";

    long long n;
    cin>>n;
    long long a[n];
    string s[n];
    long long k=0;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        long long c = sqrt(a[i]);
            int check = 0;
            long long j;
            for(j=2;j*j<c;j++)
            {
                if(a[i]%j == 0)
                {
                    check = -1;
                    break;
                }
            }
            if(check == 0 && c*c == a[i] && a[i]>1 && j*j>c) s[k++] = "YES";
            else s[k++]="NO";

    }
    for(long long i=0;i<n;i++)cout<<s[i]<<"\n";
}