//https://zerojudge.tw/ShowProblem?problemid=a676
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> c(n+1);
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    int in;
    while(cin>>in){
        vector<int> r(n+1),lis(n+1,1);
        r[in]=c[1];
        for(int i=2;i<=n;i++){
            cin>>in;
            r[in]=c[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                if(r[i]>r[j]){
                    lis[i]=max(lis[i],lis[j]+1);
                }
            }
            ans=max(ans,lis[i]);
        }
        cout<<ans<<'\n';
    }
}