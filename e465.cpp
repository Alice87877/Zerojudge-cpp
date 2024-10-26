//https://zerojudge.tw/ShowProblem?problemid=e465
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s,n,tt=0;
    cin>>m>>s>>n;
    vector<int> x(n),dp(m+1,0);
    for(int i=0;i<n;i++){
        cin>>x[i];
        tt+=x[i];
    }
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=m;j>=x[i];j--){
            if(dp[j-x[i]]){
                dp[j]=1;
            }
        }
    }
    int ans;
    if(s>(m-tt)){
        s-=m-tt;
    }
    for(int i=s;i<=m;i++){
        if(dp[i]){
            ans=i;
            break;
        }
    }
    cout<<ans;
}