#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    int output = 0;
    for(int i=0; i<n; i++)
    {
        int left = 0, right = 0, up = 0, down = 0;
        int x1 = a[i][0];
        int y1 = a[i][1];
        for(int j = 0; j<n; j++)
        {
            int x2 = a[j][0];
            int y2 = a[j][1];
            if(x2 < x1 && y2 == y1) left = 1;
            else if(x2 == x1 && y2 < y1) down = 1;
            else if(x2 > x1 && y2 == y1) right = 1;
            else if(x2 == x1 && y2 > y1) up = 1;
        }
        if(left == 1 && right == 1 && up == 1 && down == 1) output++;
    }
    cout<<output;
}