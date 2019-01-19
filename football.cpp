#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    string str1 ="", str2="";
    int goal1 = 0;
    int goal2 = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        if(str1 == "")
        {
            str1 = arr[i];
            goal1++;
        }
        else if(str1 == arr[i])
        {
            goal1++;
        }
        else if(arr[i] != str1)
        {
            str2 = arr[i];
            goal2++;
        }
    }
    if(goal1>goal2) cout<<str1;
    else cout<<str2;
    
}