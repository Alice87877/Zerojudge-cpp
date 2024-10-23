//TOI練習賽202409新手組第3題
//https://zerojudge.tw/ShowProblem?problemid=o580
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,ansn=0,ans=0,t;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        t=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                t++;
            }
        }
        if(t>ans){
            ans=t;
            ansn=i;
        }
    }
    cout<<ansn<<' '<<ans;
}