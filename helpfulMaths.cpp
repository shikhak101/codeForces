#include<iostream>
using namespace std;
class helpfulMaths
{
    public:
    string solution(string s)
    {
        string a = "";
        int add= 0;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == '+') add++;
        }
        int len = s.length() - add;
        int arr[len];
        int j=0;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == '1') arr[j++] = 1;
            else if(s[i] == '2') arr[j++] = 2;
            else if(s[i] == '3') arr[j++] = 3;
        }
        int *arr_sorted = sort(arr,len);
        for(int i = 0; i< len; i++)
        {
            a += '0'+arr_sorted[i];
            if(i!=len-1) a+='+';
        }
        return a;
    }
    int* sort(int arr[], int n)
    {
        int i =1;
        while(i<n)
        {
            int item = arr[i];
            int j = i-1;
            while(item<arr[j] && j>=0)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = item;
            i++;
        }
        return arr;
    }
};

int main()
{
    //cout<<"Enter input : ";
    string s;
    cin>>s;
    helpfulMaths obj;
    string a = obj.solution(s);
    cout<<a;
}