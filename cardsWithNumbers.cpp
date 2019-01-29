#include<iostream>
#include<vector>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int len = 2*n;
    int count[600000];
    int a[len];
    for(int i=0;i<600000;i++) count[i] = -1;
    vector<int> v1,v2;
    for(int i=0; i<len; i++)
    {
        cin>>a[i];
        if(count[a[i]] != -1)
        {
            v1.push_back(i+1);
            v2.push_back(count[a[i]]+1);
            count[a[i]] = -1;
        }
        else
        {
            count[a[i]] = i;
        }
    }
    if(n != v1.size()) cout<<-1;
    else
    {
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i]<<" "<<v2[i]<<"\n";
        }
    }
}