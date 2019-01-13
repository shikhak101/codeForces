#include<iostream>
using namespace std;
class lightsOut
{
    public:
    void solution(int arr[3][3], int lights[3][3])
    {
        
        for(int i = 0; i<3; i++)
        {
            for(int j = 0; j< 3; j++)
            {
                if(arr[i][j]%2 == 1)
                {
                    lights[i][j] = (lights[i][j]==0) ? 1:0;
                    if(i<2) lights[i+1][j] = (lights[i+1][j]==0) ? 1:0;
                    if(i>0) lights[i-1][j] = (lights[i-1][j]==0) ? 1:0;
                    if(j<2) lights[i][j+1] = (lights[i][j+1]==0) ? 1:0;
                    if(j>0) lights[i][j-1] = (lights[i][j-1]==0) ? 1:0;
                }
                
            }
        }
        for(int i = 0; i< 3; i++)
        {
            for(int j = 0; j<3; j++)
            {
                cout<<lights[i][j];
            }
            cout<<"\n";
        }
    }
};

int main()
{
    lightsOut obj;
    int arr[3][3];
    for(int i = 0; i<3; i++)
    {
       // cout<<"Enter row "<<i<<" values : ";
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    int lights[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
    obj.solution(arr,lights);
    
}