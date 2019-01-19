#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long traveltime[n];
    long long min = 1000000000;
    long long output = -1;
    for(long long i = 0; i< n; i++)
    {
        cin>>traveltime[i];
        if(traveltime[i] == min && output != -1)
        {
            output = -2;
        }
        else if(traveltime[i] <= min)
        {
            output = i;
            min = traveltime[i];
        }
    }
    if(output == -2) cout<<"Still Rozdil";
    else cout<<output+1;
}