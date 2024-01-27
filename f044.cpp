//https://zerojudge.tw/ShowProblem?problemid=f044
#include <iostream>

using namespace std;

int main(){

    int n,t,day,all;
    cin>>n>>t;
    all=n+t;
    all=all/n;
    while(all!=1){
        all/=2;
        day+=1;
    }
    cout<<day;

    return 0;
}
