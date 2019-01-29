#include<iostream>
using namespace std;
int main()
{
    char c[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>c[i][j];
        }
    }
    int poss = 0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<3 && j<3 && c[i+1][j]==c[i][j+1] && c[i][j+1]==c[i+1][j+1]) poss = 1;
            else if(i<3 && j>0 && c[i+1][j]==c[i+1][j-1] && c[i+1][j-1]==c[i][j-1]) poss = 1;
            else if(i>0 && j>0 && c[i-1][j]==c[i-1][j-1] && c[i-1][j-1]==c[i][j-1]) poss = 1;
            else if(i>0 && j<3 && c[i-1][j]==c[i-1][j+1] && c[i-1][j+1]==c[i][j+1]) poss = 1;
            if(poss == 1) break;
        }
        if(poss==1) break;
    }
    if(poss ==1) cout<<"YES";
    else cout<<"NO";
}