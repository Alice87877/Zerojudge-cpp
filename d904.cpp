//https://zerojudge.tw/ShowProblem?problemid=d904
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>c>>n;
    vector<int> dp(c+1),change(n);
    for(int i=0;i<n;i++) cin>>change[i];
    for(int i=1;i<=c;i++) dp[i]=10000;
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=change[i];j<=c;j++){
            dp[j]=min(dp[j],dp[j-change[i]]+1);
        }
    }
    cout<<dp[c];
}