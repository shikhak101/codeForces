#include<iostream>
using namespace std;
class softDrinking
{
    public:
    int solution(int n, int k, int l, int c, int d, int p, int nl, int np)
    {
        int total_drink = k*l;
        int total_lime = c*d;
        int toast1 = (total_drink/n)/nl;
        int toast2 = total_lime/n;
        int toast3 = (p/n)/np;
        int count = min_toast(toast1,toast2,toast3);
        return count; 
    }
    int min_toast(int t1, int t2, int t3)
    {
        if(t1<=t2 && t1<=t3) return t1;
        if(t2<=t1 && t2<=t3) return t2;
        return t3;
    }
};

int main()
{
    softDrinking obj;
    int n,k,l,c,d,p,nl,np;
    //cout<<"Enter values: ";
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int count = obj.solution(n,k,l,c,d,p,nl,np);
    cout<<count;
}