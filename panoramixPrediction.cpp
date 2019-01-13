#include<iostream>
using namespace std;
class panoramixPrediction
{
    public:
    int solution(int num)
    {
        bool check = true;
        int next = num;
        while(check)
        {
            next++;
            if(nextisprime(next))
            {
                check = false;
            }
        }
        return next;
    }
    bool nextisprime(int next)
    {
        int count = 0;
        for(int i = 2; i<next; i++)
        {
            if(next%i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0) return true;
        return false;
    }
};

int main()
{
    //cout<<"Enter n and m values : ";
    int n,m;
    cin>>n>>m;
    panoramixPrediction obj;
    int next = obj.solution(n);
    if(m == next) cout<<"YES";
    else cout<<"NO";
}