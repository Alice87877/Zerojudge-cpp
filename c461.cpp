//https://zerojudge.tw/ShowProblem?problemid=c461
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n;
    bool flag=1;
    cin>>a>>b>>n;

    if(a!=0 && b!=0){
        if(n==1){
            cout<<"AND\n";
            flag=0;
        }
    }else{
        if(n==0){
            cout<<"AND\n";
            flag=0;
        }
    }

    if(a==0 && b==0){
        if(n==0){
            cout<<"OR\n";
            flag=0;
        }
    }else{
        if(n==1){
            cout<<"OR\n";
            flag=0;
        }
    }

    if((a==0 && b==0) || (a!=0 &&b!=0)){
        if(n==0){
            cout<<"XOR\n";
            flag=0;
        }
    }else{
        if(n==1){
            cout<<"XOR\n";
            flag=0;
        }
    }

    if(flag){
        cout<<"IMPOSSIBLE";
    }
}
