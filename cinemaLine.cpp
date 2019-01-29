#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bill25 = 0;
    int bill50 = 0;
    int bill100 = 0;
    int a[n];
    int check = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(check != -1)
        {
            if(a[i] == 25) bill25++;
            else if(a[i] == 50) 
            {
                bill50++;
                if(bill25 < 1) check = -1;
                else bill25--;
            }
            else 
            {
                bill100++;
                if(bill25 >= 1 && bill50 >= 1)
                {
                    bill25--; bill50--;
                }
                else if(bill25 >= 3)
                {
                    bill25 -= 3;
                }
                else 
                {
                    check = -1;
                }
                
            }
        }

    }
    if(check == -1) cout<<"NO";
    else cout<<"YES";
}