#include<iostream>
using namespace std;
class arrivalOfGeneral
{
    public:
    int solution(int arr[],int n)
    {
        int count = 0;
        int min = 100, max = 0;
        int min_i = 0, max_i = n-1;
        for(int i = 0;i<n; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                max_i = i;
            }
            if(arr[i]<=min)
            {
                min = arr[i];
                min_i = i;
            }
        }
        if(min_i>max_i)
        {
            count = max_i + n - min_i - 1;
        }
        else
        {
            count = n - min_i + max_i - 1 -1;
        }
        return count;
    }
};

int main()
{
   // cout<<"Enter n: ";
    int n;
    cin>> n;
    //cout<<"Enter array values : ";
    int arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    arrivalOfGeneral obj;
    int count = obj.solution(arr,n);
    cout<<count;
}
