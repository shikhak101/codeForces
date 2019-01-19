#include<iostream>
#include<vector>
using namespace std;
class horseShoe
{
    public:
    int solution(long arr[])
    {
        int count = 0;
        for(int i =0; i<3; i++)
        {
            for(int j = i+1; j<4; j++)
            {
                if(arr[i] == arr[j] && arr[j] != -1)
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        return count;
    }
};

int main()
{
    horseShoe obj;
    //cout<<"Enter values :";
    long arr[4];
    for(int i = 0; i<4; i++)
        cin>>arr[i];
    int count = obj.solution(arr);
    cout<<count;
}