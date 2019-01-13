#include<iostream>
using namespace std;
class iLoveUser
{
    public:
    int solution(int n, int arr[])
    {
        if(n==1) return 0;
        int count = 0;
        int min =arr[0];
        int max = arr[0];
        for(int i = 1; i<n;i++)
        {
            if(arr[i]>max)
            {
                count++;
                max = arr[i];
            } 
            else if(arr[i]<min)
            {
                count++;
                min = arr[i];
            }
        }
        return count;
    }
};

int main()
{
    //cout<<"Enter number of contests : ";
    int n;
    cin>>n;
    //cout<<"Enter contest scores : ";
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    iLoveUser obj;
    int count = obj.solution(n, arr);
    cout<<count;
}