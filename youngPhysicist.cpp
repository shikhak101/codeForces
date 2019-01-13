#include<iostream>
using namespace std;
class youngPhysicist
{
    public:
    bool solution(int x[],int y[], int z[], int n)
    {
        int sum_x = 0, sum_y=0, sum_z=0;
        for(int i = 0; i<n; i++)
        {
            sum_x = sum_x + x[i];
            sum_y = sum_y + y[i];
            sum_z = sum_z + z[i];
        }
        if(sum_x == 0 && sum_y == 0 && sum_z == 0) return true;
        else return false;
    }
};

int main()
{
    int n;
    int x,y,z;
    
    //cout<<"Enter number of inputs : ";
    cin>>n;
    int arr_x[n], arr_y[n], arr_z[n];
    for(int i = 0; i<n; i++)
    {
        //cout<<i<<". Enter x, y, z values";
        cin>>x>>y>>z;
        arr_x[i] = x;
        arr_y[i] = y;
        arr_z[i] = z;
    }
    youngPhysicist obj;
    bool result = obj.solution(arr_x,arr_y,arr_z,n);
    if(result == true) cout<<"YES";
    else cout<<"NO";
}