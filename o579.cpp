//TOI練習賽202409新手組第2題
//https://zerojudge.tw/ShowProblem?problemid=o579
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,ans;
    cin>>n;
    ans=n*3;
    a=299;
    if(n>300){
        a+=(n-300)*3;
    }
    ans=min(a,ans);
    a=699;
    if(n>750){
        a+=(n-750)*3;
    }
    ans=min(a,ans);
    cout<<ans;
}