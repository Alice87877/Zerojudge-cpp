//https://zerojudge.tw/ShowProblem?problemid=e447
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> qu;
    int N,k,a;
    cin>>N;
    while(N--){
        cin>>k;
        if(k==1){
            cin>>a;
            qu.push(a);
        }
        if(k==2){
            if(!qu.empty()){
                cout<<qu.front()<<'\n';
            }else{
                cout<<-1<<'\n';
            }
        }
        if(k==3){
            if(!qu.empty()){
                qu.pop();
            }
        }
    }
}
