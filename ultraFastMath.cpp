#include<iostream>
using namespace std;
class ultraFastMath
{
    public:
    string solution(string num1, string num2)
    {
        string result = "";
        for(int i = 0; i<num1.length(); i++)
        {
            if(num1[i]!=num2[i])
            {
                result += '1';
            }
            else
            {
                result += '0';
            }
        }
        return result;
    }
};

int main()
{
    ultraFastMath obj;
    //cout<<"Enter 2 numbers : ";
    string num1, num2;
    cin>>num1>>num2;
    string result = obj.solution(num1,num2);
    cout<<result;
}