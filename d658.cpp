//https://zerojudge.tw/ShowProblem?problemid=d658
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t=1;
    while(cin>>n && n>0){
        int time=0,m=1;
        while(n>m){
            m=m*2;
            time++;
        }
        cout<<"Case "<<t<<": "<<time<<'\n';
        t++;
    }
}