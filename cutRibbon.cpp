#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int l1,l2,l3;
    if(a<=b && a<=c)
    {
        l1=a;
        if(b<=c)
        {
            l2=b; l3=c;
        }
        else
        {
            l2=c; l3=b;
        }
    }
    else if(b<=a && b<=c)
    {
        l1=b;
        if(a<=c)
        {
            l2=a; l3=c;
        }
        else
        {
            l2=c; l3=a;
        }
    }
    else if(c<=a && c<=b)
    {
        l1=c;
        if(a<=b)
        {
            l2=a; l3=b;
        }
        else
        {
            l2=b; l3=a;
        }
    }
    int p = 0, maxp=0,i,j,k;
    //cout<<l1<<" "<<l2<<" "<<l3<<"\n";
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            for(k=0; k<=n; k++)
            {
                if((l1*k + l2*j + l3*i) == n )
                {
                    p = i+j+k;
                    if(maxp<p)maxp = p;
                    //cout<<(l1*k + l2*j + l3*i)<<" "<<n<<"\n";
                    break;

                }
                
            }
            if(maxp>0)break;
        }
         //if(maxp==1)break;
    }
    cout<<maxp;

}