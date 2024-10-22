//APCS2024101
//https://zerojudge.tw/ShowProblem?problemid=o711
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w1,w2,h1,h2,nowh=0,in,ans=0,maxans=-1;
    cin>>n>>w1>>w2>>h1>>h2;
    while(n--){
        cin>>in;
        ans=0;
        if(nowh==h1+h2){
            ans=0;
        }else if(nowh>=h1 && nowh+in/(w2*w2)>=h1+h2){
            ans=h1+h2-nowh;
        }else if(nowh>=h1){
            ans=in/(w2*w2);
        }else if(nowh+in/(w1*w1)<=h1){
            ans=in/(w1*w1);
        }else if(in>=(h1-nowh)*w1*w1+h2*w2*w2){
            ans=h1+h2-nowh;
        }else{
            ans=(h1-nowh)+(in-(h1-nowh)*w1*w1)/(w2*w2);
        }
        nowh+=ans;
        maxans=max(ans,maxans);
    }
    cout<<maxans;
}
