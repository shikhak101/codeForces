#include<iostream>
using namespace std;
class team
{
    public:
    int solution(int arr[][3], int n)
    {
        int prob = 0;
        for(int i = 0; i<n; i++)
        {
            int count = 0;
            for(int j = 0;j<3; j++)
            {
                if(arr[i][j] == 1) count++;
            }
            if(count >= 2) prob++;
        }
        return prob;
    }
};

int main()
{
    team obj;
    int n;
    //cout<<"Enter number of problems: ";
    cin>>n;
    int arr[n][3];
    for(int i = 0; i<n; i++)
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    int prob = obj.solution(arr,n);
    cout<<prob;
}