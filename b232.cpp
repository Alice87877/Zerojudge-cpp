//https://zerojudge.tw/ShowProblem?problemid=b232
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long dp[800];
    for(int i=0;i<=750;i++) dp[i]=1;
    for(int i=3;i<=750;i+=2){
        for(int j=i;j<=750;j++){
            dp[j]+=dp[j-i];
        }
    }
    int m,n;
    while(cin>>m){
        while(m--){
            cin>>n;
            cout<<dp[n]<<'\n';
        }
        cout<<'\n';
    }
}