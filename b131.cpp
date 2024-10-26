//https://zerojudge.tw/ShowProblem?problemid=b131
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> dp(n+1,0),v(m),w(m);
    for(int i=0;i<m;i++){
        cin>>v[i]>>w[i];
        w[i]=v[i]*w[i];
    }
    for(int i=0;i<m;i++){
        for(int j=n;j>=v[i];j--){
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    cout<<dp[n];
}