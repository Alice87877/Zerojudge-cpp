//https://zerojudge.tw/ShowProblem?problemid=a215
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        int ans=n,i=1;
        while(ans<=m){
            ans+=n+i;
            i++;
        }
        cout<<i<<'\n';
    }
}