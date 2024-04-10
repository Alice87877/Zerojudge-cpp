//https://zerojudge.tw/ShowProblem?problemid=e286
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1=0,b1=0,a2=0,b2=0,n;
    for(int i=1;i<=4;i++){
        cin>>n;
        a1+=n;
    }
    for(int i=1;i<=4;i++){
        cin>>n;
        b1+=n;
    }
    for(int i=1;i<=4;i++){
        cin>>n;
        a2+=n;
    }
    for(int i=1;i<=4;i++){
        cin>>n;
        b2+=n;
    }
    cout<<a1<<":"<<b1<<"\n";
    cout<<a2<<":"<<b2<<"\n";
    if(a1>b1 && a2>b2){
        cout<<"Win";
    }else if(a1>b1 || a2>b2){
        cout<<"Tie";
    }else{
        cout<<"Lose";
    }
}
