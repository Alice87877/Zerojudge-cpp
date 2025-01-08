//APCS202511
//https://zerojudge.tw/ShowProblem?problemid=q181
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n,ans=0;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        if(in%(a+b)>=a){
            ans+=b-(in%(a+b)-a);
        }
    }
    cout<<ans;
}
