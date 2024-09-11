//https://zerojudge.tw/ShowProblem?problemid=i213
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    stack<int> kl;
    cin>>n;
    while(n--){
        int k,a;
        cin>>k;
        if(k==1){
            cin>>a;
            kl.push(a);
        }
        if(k==2){
            if(kl.empty()) cout<<-1<<'\n';
            else cout<<kl.top()<<'\n';
        }
        if(k==3){
            if(!kl.empty()) kl.pop();
        }
    }
}
