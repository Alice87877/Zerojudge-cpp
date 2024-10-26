//https://zerojudge.tw/ShowProblem?problemid=a248
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n;
    while(cin>>a>>b>>n){
        cout<<a/b<<'.';
        a=a%b;
        for(int i=0;i<n;i++){
            cout<<(10*a)/b;
            a=(10*a)%b;
        }
        cout<<'\n';
    }
}