#include<iostream>
using namespace std;
class beautifulMatrix
{
    public:
    int solution(int x, int y)
    {
        int moves = abs(2-x) + abs(2-y);
        return moves;
    }
};

int main()
{
    beautifulMatrix obj;
    int val;
    int x,y;
    for(int i = 0; i< 5; i++)
    {
        //cout<<"Enter row "<<i<<" values : ";
        for(int j = 0; j<5; j++)
        {
            cin>>val;
            if(val == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int moves = obj.solution(x,y);
    cout<<moves;
}