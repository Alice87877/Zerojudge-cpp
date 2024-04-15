//https://zerojudge.tw/ShowProblem?problemid=b558
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int ans=1;
        for(int i=1;i<n;i++){
            ans+=i;
        }
        cout<<ans<<'\n';
    }
}
