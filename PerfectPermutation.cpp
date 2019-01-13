#include<iostream>
using namespace std;
class perfectPermutation
{
    public:
    void solution(int n)
    {
        if(n % 2 == 1) cout<<"-1";
        else
        {
            int arr[n];
            for(int i=0; i<n;i++)
            {
                arr[i] = i+1;
            }
            for(int i = 0; i< n-1; i+=2)
            {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        
            for(int i = 0; i< n; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }

};

int main()
{
    //cout<<"Enter n: ";
    int n;
    cin>>n;
    perfectPermutation obj;
    int arr[n];
    obj.solution(n);
    
}