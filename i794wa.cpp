//https://zerojudge.tw/ShowProblem?problemid=i794
//only 90趴 這是錯ㄉ
#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,e,n;
    cin>>w>>e>>n;
    vector<int> d(n),a(n),dp(e+1);
    for(int i=0;i<n;i++){
        cin>>d[i]>>a[i];
    }
    for(int i=1;i<=e;i++) dp[i]=10000000;
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=e;j>=a[i];j--){
            if(dp[j]>dp[j-a[i]]+d[i]){
                dp[j]=dp[j-a[i]]+d[i];
            }
        }
    }
    if(dp[e]>=w){
        cout<<"wryyyyyyyyyyyyy";
    }else{
        cout<<w-dp[e];
    }
}