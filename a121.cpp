//https://zerojudge.tw/ShowProblem?problemid=a121
#include <bits/stdc++.h>
using namespace std;

bool yesno(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    while(cin>>a>>b){
        int ans=0;
        for(int i=a;i<=b;i++){
            if(yesno(i)){
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
}
