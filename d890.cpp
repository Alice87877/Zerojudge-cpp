//https://zerojudge.tw/ShowProblem?problemid=d890
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,p[550],sum=0,best;
    bool dp[1000000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];
    }
    best=sum/2;
    dp[0]=1;
    for(int i=1;i<=best;i++) dp[i]=0;
    for(int i=0;i<n;i++){
        for(int j=best;j>=p[i];j--){
            if(dp[j-p[i]]==1){
                dp[j]=1;
            }
        }
    }
    int ans1;
    for(int i=best;i>=0;i--){
        if(dp[i]){
            ans1=i;
            break;
        }
    }
    cout<<ans1<<' '<<sum-ans1;
}