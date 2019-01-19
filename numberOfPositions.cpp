#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int left = b+1;
    int right = n-a;
    int pos = 0;
    if(left == right && a == b)
    {
        pos = left;
    }
    else if(left == right && a<b)
    {
        pos = n-a;
    }
    else if(left == right && b<a)
    {
        pos = b+1;
    }
    else if(left<right){
        pos = left;
    }
    else if(right<left)
    {
        pos = right;
    }
    cout<<pos;
}