//https://zerojudge.tw/ShowProblem?problemid=d253
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[8000],cent[4]={5,10,25,50};
    for(int i=0;i<=7489;i++) m[i]=1;
    for(int i=0;i<4;i++){
        for(int j=cent[i];j<=7489;j++){
            m[j]+=m[j-cent[i]];
        }
    }
    int n;
    while(cin>>n){
        cout<<m[n]<<'\n';
    }
}