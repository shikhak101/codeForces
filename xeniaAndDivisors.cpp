#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int check = 0;
    int count[8] = {0}; 
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==5 || a[i]==7) check = -1;
        count[a[i]]++;
        if(count[a[i]]>n/3) check = -1;
        
    }
    
    if(count[1] != n/3 || count[2]!= count[4]+count[6]-count[3] || count[3] != count[6]-count[2]+count[4] || count[4] != count[2]-count[6]+count[3] || count[6] != count[3]+count[2]-count[4]) check = -1;
    if(check == -1) cout<<-1;
    else
    {
        int output[n/3][3];
        int k = 0;
        while(k<n/3)
        {
            if(count[1]>0 && count[2]>0 && count[4]>0)
            {
                output[k][0] = 1; output[k][1] = 2; output[k][2] = 4;
                k++;
                count[1]--; count[2]--; count[4]--;
            }
            else if(count[1]>0 && count[2]>0 && count[6]>0)
            {
                output[k][0] = 1; output[k][1] = 2; output[k][2] = 6;
                k++;
                count[1]--; count[2]--; count[6]--;
            }
            else if(count[1]>0 && count[3]>0 && count[6]>0)
            {
                output[k][0] = 1; output[k][1] = 3; output[k][2] = 6;
                k++;
                count[1]--; count[3]--; count[6]--;
            }
            else{
                check = -1;
                break;
            }
        }
        if(check==-1) cout<<-1;
        else
        {
            for(int m = 0; m<n/3;m++)
            {
                cout<<output[m][0]<<" "<<output[m][1]<<" "<<output[m][2]<<"\n";
            }
        }
    }
    
}