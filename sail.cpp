#include<iostream>
using namespace std;
int main()
{
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    char c;
    int output = -1;
    int dx = ex-sx;
    int dy = ey-sy;
    int s = 0, n = 0, e = 0, w = 0;
    if(dx>0) e = dx;
    else w = abs(dx);
    if(dy>0) n = dy;
    else s = abs(dy);
    //cout<<s<<" "<<n<<" "<<e<<" "<<w<<"\n";
    for(int i = 0;i<t;i++)
    {
        cin>>c;
        if(c=='S' && s>0) s--;
        else if(c=='N' && n>0) n--;
        else if(c == 'W' && w>0) w--;
        else if(c=='E' && e>0) e--;
        if(s==0 && n==0 && w==0 && e==0 & output == -1) output = i+1;
    }
    cout<<output;
}