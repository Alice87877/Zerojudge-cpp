//https://zerojudge.tw/ShowProblem?problemid=d637
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w[10010],p[10010],dp[110];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i]>>p[i];
    }
    for(int i=0;i<=100;i++) dp[i]=0;
    for(int i=0;i<n;i++){
        for(int j=100;j>=w[i];j--){
            if(dp[j]<dp[j-w[i]]+p[i]){
                dp[j]=dp[j-w[i]]+p[i];
            }
        }
    }
    cout<<dp[100];
}