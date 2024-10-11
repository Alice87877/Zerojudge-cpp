//https://zerojudge.tw/ShowProblem?problemid=d221
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    while(cin>>n && n!=0){
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        while(n--){
            ll a;
            cin>>a;
            pq.push(a);
        }
        ll ans=0;
        while(pq.size()>=2){
            ll a,b;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
        cout<<ans<<'\n';
    }
}