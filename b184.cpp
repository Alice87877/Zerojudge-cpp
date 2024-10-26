//https://zerojudge.tw/ShowProblem?problemid=b184
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,dp[110];
    while(cin>>n){
        for(int i=0;i<=100;i++) dp[i]=0;
        vector<int> v(n),c(n);
        v.clear(); c.clear();
        for(int i=0;i<n;i++){
            cin>>v[i]>>c[i];
        }
        for(int i=0;i<n;i++){
            for(int j=100;j>=v[i];j--){
                dp[j]=max(dp[j],dp[j-v[i]]+c[i]);
            }
        }
        cout<<dp[100]<<'\n';
    }
}