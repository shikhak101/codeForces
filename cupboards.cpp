#include<iostream>
using namespace std;
class cupboards
{
    public:
    int solution(int t, int arr[][2])
    {
        int l = 0, r = 0;
        int count = 0;
        for(int i = 0; i<t; i++)
        {
            if(arr[i][0] == 1)
                l++;
            if(arr[i][1] == 1)
                r++;
        }
        if(l>(t-l))
        {
            count = (t-l);
        }
        else{
            count = l;
        }
        if(r>(t-r))
        {
            count += (t-r);
        }
        else{
            count += r;
        }
        return count;
    }
};

int main()
{
    //cout<<"Enter the number of cupboards : ";
    int t;
    cin>>t;
    int arr[t][2];
    //cout<<"Enter the array values: ";
    for(int i = 0; i<t; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    cupboards obj;
    int count = obj.solution(t, arr);
    cout<<count;
}