#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g[5][5];
    int x[5];
    for(int i=0;i<5; i++)
    {   
        x[i] = i;
        for(int j=0;j<5;j++)
        {
            cin>>g[i][j];
        }
    }
    int maxhap =0;
    do
    {
        int hap = g[x[0]][x[1]] + g[x[1]][x[0]] + g[x[1]][x[2]] + g[x[2]][x[1]] + 2 * (g[x[2]][x[3]] + g[x[3]][x[2]]) + 2 * (g[x[3]][x[4]] + g[x[4]][x[3]]);
        if(hap>maxhap) maxhap = hap;
    }while(next_permutation(x,x+5));
    cout<<maxhap;
}
