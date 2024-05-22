//https://zerojudge.tw/ShowProblem?problemid=k137
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    long long ans;
    ans=a;
    for(int i=1;i<b;i++){
        ans*=a;
    }
    if(b==0){
        ans=1;
    }
    cout<<a<<'^'<<b<<" = "<<ans;
}
