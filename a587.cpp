//https://zerojudge.tw/ShowProblem?problemid=a587
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,w[110],p[110],dp[11000];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>w[i]>>p[i];
        }
        cin>>m;
        for(int i=0;i<=m;i++){
            dp[i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=m;j>=w[i];j--){
                if(dp[j-w[i]]+p[i]>dp[j]){
                    dp[j]=dp[j-w[i]]+p[i];
                }
            }
        }
        cout<<dp[m]<<'\n';
    }
}