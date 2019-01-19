#include<iostream>
using namespace std;
int main()
{
    int n;
    int output = -1;
    cin>>n;
    int pages[7];
    int sum = 0;
    for(int i =0; i<7; i++)
    {
        cin>>pages[i];
        sum = sum + pages[i];
        if(sum >= n & output == -1)
        {
            output = i;
        }
    }
    if(output == -1)
    {
        int remaining = n - ((n/sum)*sum);
        if(remaining == 0)
        {
            int q = n/sum;
            int temp = sum*(q-1);
            for(int i = 0; i<7; i++)
            {
                if(n == temp + pages[i])
                {
                    output = i;
                    break;
                }
                else{
                    temp = temp + pages[i];
                }
            }
        }
        else
        {
            for(int i =0; i<7; i++)
            {
                if(remaining - pages[i] <= 0)
                {
                    output = i;
                    break;
                }
                remaining = remaining - pages[i];
            }
        }
    }
    cout<<output+1;
}