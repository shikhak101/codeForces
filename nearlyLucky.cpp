#include<iostream>
using namespace std;
class nearlyLucky
{
    public:
    bool solution(long long num)
    {
        long long count = 0;
        bool output = true;
        while(num)
        {
            int d = num%10;
            if(d == 4 || d == 7)
            {
                //cout<<num<<"---"<<d<<"\n";
                count++;
            }
            num = num / 10;
        }
        //cout<<"\n";
        //cout<<count<<"\n";
        if(count == 0) output = false;
        while(count)
        {
            int d = count % 10;
            if(d != 4 && d != 7) output = false;
            count = count / 10; 
        }
        return output;
    }
};

int main()
{
    nearlyLucky obj;
    long long num;
    //cout<<"Enter number : ";
    cin>>num;
    bool output = obj.solution(num);
    if(output == true) cout<<"YES";
    else cout<<"NO";
}