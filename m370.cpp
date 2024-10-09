//APCS2023101
//https://zerojudge.tw/ShowProblem?problemid=m370
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,in,mi=100,ma=-100,timea=0,timei=0;
    cin>>x>>n;
    while(n--){
        cin>>in;
        if(in>=x){
            timea++;
            ma=max(ma,in);
        }else{
            timei++;
            mi=min(mi,in);
        }
    }
    if(timea>timei){
        cout<<timea<<' '<<ma;
    }else{
        cout<<timei<<' '<<mi;
    }
}