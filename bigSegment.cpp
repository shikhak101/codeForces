#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n][2];
//     for(int i = 0; i<n;i++)
//     {
//         cin>>arr[i][0]>>arr[i][1];
//     }
//     int check = 0, i;
//     for(i=0;i<n; i++)
//     {
//         check = 0;
//         for(int j = 0; j<n; j++)
//         {
//             if(j!=i)
//             {
//                 int a=arr[i][0], b=arr[i][1], c=arr[j][0], d=arr[j][1];
//                 if(a<=c && c<=d && d<=b)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     check = -1;
//                     break;
//                 }
//             }
//         }
//         if(check == 0)
//         {
//             cout<<i+1;
//             break;
//         }
//     }
//     if(i == n && check == -1) cout<<-1;
// }

int main()
{
    long long n;
    cin>>n;
    long long a, b, c, d;
    int check = -1;
    for(int i = 0; i<n;i++)
    {
        cin>>a>>b;
        if(i == 0)
        {
            c=a;
            d=b;
        }
        if(a<c)
        {
            c=a; 
            check = -1;
        }
        if(d<b)
        {
            d=b;
            check = -1;
        }
        if(a==c && b==d)
        {
            check = i+1;
        }
    }
    cout<<check;
}