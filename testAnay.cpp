#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long n;
    cin>>n;
    vector<long long> arr;
    vector<vector<long long> > aux(5001, vector<long long>());
    
    for(long long i = 0;i<2*n;i++){
        long long x;
        cin>>x;
        arr.push_back(x);
        aux[x].push_back(i+1);
    }

    for(long long i = 0;i<5001;i++){
        if(aux[i].size()%2!=0){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(long long i = 0;i<5001;i++){
        for(long long j = 0;j<aux[i].size();j=j+2){
            cout<<aux[i][j]<<" "<<aux[i][j+1]<<endl;
        }
    }
}