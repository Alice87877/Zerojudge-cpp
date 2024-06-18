//https://zerojudge.tw/ShowProblem?problemid=o076
//APCS2024六月場第一題
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h[1001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int ans=1,m=-1;
    for(int i=0;i<n-1;i++){
        if(h[i]>h[i+1]){
            ans++;
        }else{
            if(ans>m){
                m=ans;
            }
            ans=1;
        }
    }
    if(ans>m){
        m=ans;
    }
    cout<<m;
}

