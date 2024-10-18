//https://zerojudge.tw/ShowProblem?problemid=g597
//只拿30趴 WA 沒AC
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(ll a,ll b){
    return a>b;
}
.
int main(){
    ll n,m,a[200100],b[20100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        a[i]=0;
        b[i]=0;
    }
    while(m--){
        int l,r,w;
        cin>>l>>r>>w;
        for(int i=l-1;i<r;i++){
            a[i]+=w;
        }
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,cmp);
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=a[i]*b[i];
    }
    cout<<ans;
    
}