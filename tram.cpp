#include<iostream>
using namespace std;
class tram
{
    public:
    int solution(int n, int arr[][2])
    {
        int count = 0;
        int capacity = 0;
        for(int i = 0; i<n; i++)
        {
            count -= arr[i][0];
            count += arr[i][1];
            if(capacity<count)
            {
                capacity = count;
            }
        }
        return capacity;
    }
};

int main()
{
    //cout<<"Enter number of stops: ";
    int n;
    cin>>n;
    int arr[n][2];
    //cout<<"Enter values : ";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    tram obj;
    int capacity = obj.solution(n,arr);
    cout<<capacity;
}