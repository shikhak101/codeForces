#include<iostream>
using namespace std;
class beautifulYear
{
    public:
    int solution(int year)
    {
        bool check = true;
        int nextyear = year + 1;
        
        while(check)
        {
            int visited[10] = {0};
            int num = nextyear;
            while(num)
            {
                int d = num % 10;
                if(visited[d] == 1)
                {
                    break;
                }
                visited[d] = 1;
                num = num/10;
            }
            if(num != 0) nextyear++;
            else check = false;
        }
        return nextyear;
    }
};

int main()
{
    beautifulYear obj;
    //cout<<"Enter year : ";
    int year;
    cin>>year;
    int output = obj.solution(year);
    cout<<output;
}