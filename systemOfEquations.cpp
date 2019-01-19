#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int num1,num2;
    if(n<m) 
    {
        num1 = n;
        num2 = m;
    }
    else 
    {
        num1= m;
        num2 = n;
    }
    int count = 0;
    for(int i = 0; i*i<=num1; i++)
    {
        int j = num1 - (i*i);
        if((j*j)+i == num2)
        {
            count++;
        }

    }
    cout<<count;
}