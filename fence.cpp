#include<iostream>
using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     long long a[n];
//     long long b[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         b[i] = a[i];
//     }
//     for(int i= 1; i<n; i++)
//     {
//         int temp = b[i];
//         int j = i-1;
//         while(j>=0 && b[j]>temp)
//         {
//             b[j+1] = b[j];
//             j--;
//         }
//         b[j+1] = temp;
//     }
//     int min = 0;
//     for(int i = 0; i<k; i++)
//     {
//         min += b[i];
//     }
//     long long minsum = 10000000;
//     int minpt = 0;
//     for(int i = 0; i<=n-k; i++)
//     {
//         int j = i;
//         long long sum = 0;
//         while(j<(i+k))
//         {
//             sum += a[j];
//             j++;
//         }
//         if(sum < minsum)
//         {
//             //cout<<sum<<" ";
//             minsum = sum;
//             minpt = i;
//         }
//         if(minsum == min)
//             break;
//     }

//     cout<<minpt+1;
// }

int main()
{
    int n,k;
    cin>>n>>k;
    int minsum = 0;
    int sum = 0;
    int a[n];
    int loc = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(i<k)
        {
            sum += a[i];
        }
        else
        {
            sum = sum + a[i] - a[i-k];
            if(minsum > sum)
            {
                minsum = sum;
                loc = i-(k-1);
            }
        }
        if(i == k-1) minsum = sum;
        //cout<<minsum<<" ";
    }
    cout<<loc+1;
}