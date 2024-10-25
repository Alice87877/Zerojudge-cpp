//https://zerojudge.tw/ShowProblem?problemid=i794
#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,e,n;
    cin>>w>>e>>n;
    vector<int> d(n),a(n),dp(w+1);
    for(int i=0;i<n;i++){
        cin>>d[i]>>a[i];
    }

    for(int i=0;i<=w;i++) dp[i]=0;

    for(int i=0;i<n;i++){
        for(int j=w;j>=d[i];j--){
            if(dp[j]<dp[j-d[i]]+a[i]){
                dp[j]=dp[j-d[i]]+a[i];
            }
        }
    }
    int ans=-1;
    for(int i=w;i>=1;i--){
        if(dp[i]>=e){
            ans=w-i;
        }
    }
    if(ans!=-1 && ans!=0){
        cout<<ans;
    }else{
        cout<<"wryyyyyyyyyyyyy";
    }
}