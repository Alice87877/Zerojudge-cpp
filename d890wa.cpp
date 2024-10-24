//https://zerojudge.tw/ShowProblem?problemid=d890
//只拿80趴 此為錯誤寫法
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,p[550],dp[550],sum=0,best;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];
    }
    best=sum/2;
    dp[0]=0;
    for(int i=1;i<=n;i++) dp[i]=p[0];
    for(int i=1;i<n;i++){
        for(int j=n;j>1;j--){
            if(abs(best-dp[j])>=abs(best-(dp[j-1]+p[i]))){
                dp[i]=dp[j-1]+p[i];
            }
        }
    }
    int ans1=0,ans2;
    for(int i=1;i<=n;i++){
        if(abs(best-ans1)>abs(best-dp[i])){
            ans1=dp[i];
        }
        if(dp[i]==best){
            ans1=dp[i];
            break;
        }
    }
    ans2=sum-ans1;
    if(ans1>ans2){
        swap(ans1,ans2);
    }
    cout<<ans1<<' '<<ans2;
}