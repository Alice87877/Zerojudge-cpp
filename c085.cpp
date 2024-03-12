//https://zerojudge.tw/ShowProblem?problemid=c085

#include <iostream>
using namespace std;

int main(){
    long long z,i,m,l,time=0;
    while(cin>>z>>i>>m>>l&&z+i+m+l!=0){
        int first=(z*l+i)%m;
        int sum=0;
        while((z*l+i)%m!=first || sum==0){
            l=(z*l+i)%m;
            sum++;
        }
        time++;
        cout<<"Case "<<time<<": "<<sum<<'\n';
    }
    return 0;
}