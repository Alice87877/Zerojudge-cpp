//https://zerojudge.tw/ShowProblem?problemid=a104
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100000];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
}