#include<iostream>
using namespace std;
class drinks
{
    public:
    float solution(float arr[], int n)
    {
        float sum = 0.0;
        for(int i = 0; i<n; i++)
        {
            sum = sum + arr[i];
        }
        float result = (sum/(n*100)*100);
        return result;
    }
};

int main()
{
    //cout<<"Enter n: ";
    int n; 
    cin>>n;
    //cout<<"Enter values : ";
    float arr[n];
    for(int i = 0; i< n; i++)
        cin>>arr[i];
    drinks obj;
    float result = obj.solution(arr,n);
    cout<<result;
}