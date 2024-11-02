//https://zerojudge.tw/ShowProblem?problemid=d887
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long dp[26];
    dp[0]=1; dp[1]=1;
    for(int i=2;i<=25;i++){
        dp[i]=0;
    }
    for(int i=2;i<=25;i++){
        for(int j=1;j<i;j++){
            dp[i]+=dp[j]*dp[i-j-1];
        }
        dp[i]+=dp[i-1];
    }
    int n;
    while(cin>>n){
        cout<<dp[n]<<'\n';
    }
}