//https://zerojudge.tw/ShowProblem?problemid=f631
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int> pq;
    int n,m;
    while(cin>>n>>m){
        int ma;
        bool nomoney=0;
        while(!pq.empty()) pq.pop();
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            pq.push(a);
        }
        ma=pq.top();
        for(int i=0;i<m;i++){
            int t,rich;
            cin>>t;
            while(t>0 && !pq.empty()){
                rich=pq.top();
                pq.pop();
                if(rich>=t){
                    rich-=t;
                    pq.push(rich);
                    t=0;
                }else{
                    t-=rich;
                }
                if(pq.empty() && t>0){
                    nomoney=1;
                    break;
                }
            }
        }
        if(nomoney){
            cout<<"Oh My God\n";
        }else{
            cout<<ma<<' '<<pq.top()<<'\n';
        }
    }
}
