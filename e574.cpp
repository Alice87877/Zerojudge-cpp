//https://zerojudge.tw/ShowProblem?problemid=e574
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,dp[1000010],move[10];
    while(cin>>n>>m){
        for(int i=0;i<m;i++){
            cin>>move[i];
        }
        dp[0]=0; dp[1]=1; dp[2]=0;
        for(int i=3;i<=n;i++){
            dp[i]=0;
            for(int j=0;j<m;j++){
                if(i>=move[j] && dp[i-move[j]]==0){
                    dp[i]=1;
                    break;
                }
            }
        }
        if(dp[n]==1){
            cout<<"Stan wins\n";
        }else{
            cout<<"Ollie wins\n";
        }
    }
}