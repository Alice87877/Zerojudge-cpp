//https://zerojudge.tw/ShowProblem?problemid=g597
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(ll a,ll b){
    return a>b;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<ll> vec(n+2),vec2(n);
    while(m--){
        int l,r,w;
        cin>>l>>r>>w;
        vec[l]+=w;
        vec[r+1]-=w;
    }
    for(int i=1;i<=n;i++){
        vec[i]=vec[i]+vec[i-1];
    }
    for(int i=0;i<n;i++){
        cin>>vec2[i];
    }
    sort(vec.begin()+1,vec.begin()+n+1,cmp);
    sort(vec2.begin(),vec2.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=vec[i+1]*vec2[i];
    }
    cout<<ans;
}