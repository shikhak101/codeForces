#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int l1,l2,l3;
    int a,b,c;
    cin>>a>>b>>c;
    l1 = sqrt((c*a)/b);
    l2 = sqrt((b*a)/c);
    l3 = sqrt((b*c)/a);
    int sum = (l1*4)+(l2*4)+(l3*4);
    cout<<sum; 
}