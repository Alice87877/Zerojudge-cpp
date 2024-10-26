//https://zerojudge.tw/ShowProblem?problemid=a522
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,l[30],dp[1010];
    cin>>t;
    while(t--){
        cin>>n>>p;
        for(int i=0;i<p;i++) cin>>l[i];
        for(int i=1;i<=n;i++) dp[i]=0;
        dp[0]=1;
        for(int i=0;i<p;i++){
            for(int j=n;j>=l[i];j--){
                if(dp[j-l[i]]==1){
                    dp[j]=1;
                }
            }
        }
        if(dp[n]){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}