#include<iostream>
using namespace std;
class insomniaCure
{
    public:
    int solution(int arr[], int d)
    {
        int visited[d];
        for(int i = 0; i<d; i++) visited[i] = 0;
        int count = 0;
        for(int i = 0; i<4; i++)
        {
            int c = arr[i];
            if(c>d) continue;
            for(int j = c-1; j<d; j+=c)
            {
                if(visited[j]!= 1)
                    visited[j] =1;
            }
        }
        for(int i = 0; i<d; i++)
        {
            if(visited[i]== 1)
                count++;
        }
        return count;
    }
};

int main()
{
    
    //cout<<"Enter k,l,m,n values: ";
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    //cout<<"Enter number of dragons : ";
    int d;
    cin>>d;
    insomniaCure obj;
    int count = obj.solution(arr,d);
    cout<<count;
}